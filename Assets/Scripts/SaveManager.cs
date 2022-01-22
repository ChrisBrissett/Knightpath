
using UnityEngine;
using System.IO;
using System.Runtime.Serialization.Formatters.Binary;


public static class SaveManager
{
    public static void SavePlayer(Player player)
    {
        BinaryFormatter formatter = new BinaryFormatter();
        string path = Application.persistentDataPath + "/.txt";
        FileStream stream = new FileStream(path, FileMode.Create);

        PlayerData data = new PlayerData(player);

        formatter.Serialize(stream, data);
        
        stream.Close();

    }

    public static PlayerData LoadPlayer()
    {
        string path = Application.persistentDataPath + "/.txt";
        if (File.Exists(path))
        {
            BinaryFormatter formatter = new BinaryFormatter();
            FileStream stream = new FileStream(path, FileMode.Open);

            PlayerData data = formatter.Deserialize(stream) as PlayerData;
            stream.Close();
            Debug.Log("Load Success!");
            return data;

        }
        else
        {
            Debug.Log("Save file not found");
            return null;
        }
    }
    public static PlayerData Delete()
    {
        if (File.Exists(Application.persistentDataPath + "/.txt"))
        {
            File.Delete(Application.persistentDataPath + "/.txt");
            Debug.Log("Deleted");
            return null;

        } else
        {
            Debug.Log("No Saved Data");
            return null;
        }



    }
}