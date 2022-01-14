#include "pch-c.h"
#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include "codegen/il2cpp-codegen-metadata.h"





// 0x00000001 System.Exception System.Linq.Error::ArgumentNull(System.String)
extern void Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E (void);
// 0x00000002 System.Exception System.Linq.Error::MoreThanOneMatch()
extern void Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8 (void);
// 0x00000003 System.Exception System.Linq.Error::NoElements()
extern void Error_NoElements_mB89E91246572F009281D79730950808F17C3F353 (void);
// 0x00000004 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable::Where(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000005 System.Func`2<TSource,System.Boolean> System.Linq.Enumerable::CombinePredicates(System.Func`2<TSource,System.Boolean>,System.Func`2<TSource,System.Boolean>)
// 0x00000006 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::OrderBy(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000007 System.Linq.IOrderedEnumerable`1<TSource> System.Linq.Enumerable::ThenBy(System.Linq.IOrderedEnumerable`1<TSource>,System.Func`2<TSource,TKey>)
// 0x00000008 TSource[] System.Linq.Enumerable::ToArray(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000009 System.Collections.Generic.List`1<TSource> System.Linq.Enumerable::ToList(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000A TSource System.Linq.Enumerable::First(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000B TSource System.Linq.Enumerable::Last(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000C TSource System.Linq.Enumerable::SingleOrDefault(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000D System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x0000000E System.Boolean System.Linq.Enumerable::Any(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000000F System.Int32 System.Linq.Enumerable::Count(System.Collections.Generic.IEnumerable`1<TSource>)
// 0x00000010 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource)
// 0x00000011 System.Boolean System.Linq.Enumerable::Contains(System.Collections.Generic.IEnumerable`1<TSource>,TSource,System.Collections.Generic.IEqualityComparer`1<TSource>)
// 0x00000012 System.Void System.Linq.Enumerable/Iterator`1::.ctor()
// 0x00000013 TSource System.Linq.Enumerable/Iterator`1::get_Current()
// 0x00000014 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/Iterator`1::Clone()
// 0x00000015 System.Void System.Linq.Enumerable/Iterator`1::Dispose()
// 0x00000016 System.Collections.Generic.IEnumerator`1<TSource> System.Linq.Enumerable/Iterator`1::GetEnumerator()
// 0x00000017 System.Boolean System.Linq.Enumerable/Iterator`1::MoveNext()
// 0x00000018 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/Iterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000019 System.Object System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.get_Current()
// 0x0000001A System.Collections.IEnumerator System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000001B System.Void System.Linq.Enumerable/Iterator`1::System.Collections.IEnumerator.Reset()
// 0x0000001C System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::.ctor(System.Collections.Generic.IEnumerable`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x0000001D System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Clone()
// 0x0000001E System.Void System.Linq.Enumerable/WhereEnumerableIterator`1::Dispose()
// 0x0000001F System.Boolean System.Linq.Enumerable/WhereEnumerableIterator`1::MoveNext()
// 0x00000020 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereEnumerableIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000021 System.Void System.Linq.Enumerable/WhereArrayIterator`1::.ctor(TSource[],System.Func`2<TSource,System.Boolean>)
// 0x00000022 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Clone()
// 0x00000023 System.Boolean System.Linq.Enumerable/WhereArrayIterator`1::MoveNext()
// 0x00000024 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereArrayIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000025 System.Void System.Linq.Enumerable/WhereListIterator`1::.ctor(System.Collections.Generic.List`1<TSource>,System.Func`2<TSource,System.Boolean>)
// 0x00000026 System.Linq.Enumerable/Iterator`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Clone()
// 0x00000027 System.Boolean System.Linq.Enumerable/WhereListIterator`1::MoveNext()
// 0x00000028 System.Collections.Generic.IEnumerable`1<TSource> System.Linq.Enumerable/WhereListIterator`1::Where(System.Func`2<TSource,System.Boolean>)
// 0x00000029 System.Void System.Linq.Enumerable/<>c__DisplayClass6_0`1::.ctor()
// 0x0000002A System.Boolean System.Linq.Enumerable/<>c__DisplayClass6_0`1::<CombinePredicates>b__0(TSource)
// 0x0000002B System.Linq.IOrderedEnumerable`1<TElement> System.Linq.IOrderedEnumerable`1::CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x0000002C System.Collections.Generic.IEnumerator`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerator()
// 0x0000002D System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`1::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x0000002E System.Collections.IEnumerator System.Linq.OrderedEnumerable`1::System.Collections.IEnumerable.GetEnumerator()
// 0x0000002F System.Linq.IOrderedEnumerable`1<TElement> System.Linq.OrderedEnumerable`1::System.Linq.IOrderedEnumerable<TElement>.CreateOrderedEnumerable(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000030 System.Void System.Linq.OrderedEnumerable`1::.ctor()
// 0x00000031 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::.ctor(System.Int32)
// 0x00000032 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.IDisposable.Dispose()
// 0x00000033 System.Boolean System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::MoveNext()
// 0x00000034 TElement System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.Generic.IEnumerator<TElement>.get_Current()
// 0x00000035 System.Void System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.Reset()
// 0x00000036 System.Object System.Linq.OrderedEnumerable`1/<GetEnumerator>d__1::System.Collections.IEnumerator.get_Current()
// 0x00000037 System.Void System.Linq.OrderedEnumerable`2::.ctor(System.Collections.Generic.IEnumerable`1<TElement>,System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean)
// 0x00000038 System.Linq.EnumerableSorter`1<TElement> System.Linq.OrderedEnumerable`2::GetEnumerableSorter(System.Linq.EnumerableSorter`1<TElement>)
// 0x00000039 System.Void System.Linq.EnumerableSorter`1::ComputeKeys(TElement[],System.Int32)
// 0x0000003A System.Int32 System.Linq.EnumerableSorter`1::CompareKeys(System.Int32,System.Int32)
// 0x0000003B System.Int32[] System.Linq.EnumerableSorter`1::Sort(TElement[],System.Int32)
// 0x0000003C System.Void System.Linq.EnumerableSorter`1::QuickSort(System.Int32[],System.Int32,System.Int32)
// 0x0000003D System.Void System.Linq.EnumerableSorter`1::.ctor()
// 0x0000003E System.Void System.Linq.EnumerableSorter`2::.ctor(System.Func`2<TElement,TKey>,System.Collections.Generic.IComparer`1<TKey>,System.Boolean,System.Linq.EnumerableSorter`1<TElement>)
// 0x0000003F System.Void System.Linq.EnumerableSorter`2::ComputeKeys(TElement[],System.Int32)
// 0x00000040 System.Int32 System.Linq.EnumerableSorter`2::CompareKeys(System.Int32,System.Int32)
// 0x00000041 System.Void System.Linq.Buffer`1::.ctor(System.Collections.Generic.IEnumerable`1<TElement>)
// 0x00000042 TElement[] System.Linq.Buffer`1::ToArray()
// 0x00000043 System.Void System.Collections.Generic.HashSet`1::.ctor()
// 0x00000044 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000045 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>)
// 0x00000046 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Collections.Generic.IEnumerable`1<T>,System.Collections.Generic.IEqualityComparer`1<T>)
// 0x00000047 System.Void System.Collections.Generic.HashSet`1::.ctor(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000048 System.Void System.Collections.Generic.HashSet`1::CopyFrom(System.Collections.Generic.HashSet`1<T>)
// 0x00000049 System.Void System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.Add(T)
// 0x0000004A System.Void System.Collections.Generic.HashSet`1::Clear()
// 0x0000004B System.Boolean System.Collections.Generic.HashSet`1::Contains(T)
// 0x0000004C System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32)
// 0x0000004D System.Boolean System.Collections.Generic.HashSet`1::Remove(T)
// 0x0000004E System.Int32 System.Collections.Generic.HashSet`1::get_Count()
// 0x0000004F System.Boolean System.Collections.Generic.HashSet`1::System.Collections.Generic.ICollection<T>.get_IsReadOnly()
// 0x00000050 System.Collections.Generic.HashSet`1/Enumerator<T> System.Collections.Generic.HashSet`1::GetEnumerator()
// 0x00000051 System.Collections.Generic.IEnumerator`1<T> System.Collections.Generic.HashSet`1::System.Collections.Generic.IEnumerable<T>.GetEnumerator()
// 0x00000052 System.Collections.IEnumerator System.Collections.Generic.HashSet`1::System.Collections.IEnumerable.GetEnumerator()
// 0x00000053 System.Void System.Collections.Generic.HashSet`1::GetObjectData(System.Runtime.Serialization.SerializationInfo,System.Runtime.Serialization.StreamingContext)
// 0x00000054 System.Void System.Collections.Generic.HashSet`1::OnDeserialization(System.Object)
// 0x00000055 System.Boolean System.Collections.Generic.HashSet`1::Add(T)
// 0x00000056 System.Void System.Collections.Generic.HashSet`1::UnionWith(System.Collections.Generic.IEnumerable`1<T>)
// 0x00000057 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[])
// 0x00000058 System.Void System.Collections.Generic.HashSet`1::CopyTo(T[],System.Int32,System.Int32)
// 0x00000059 System.Collections.Generic.IEqualityComparer`1<T> System.Collections.Generic.HashSet`1::get_Comparer()
// 0x0000005A System.Void System.Collections.Generic.HashSet`1::TrimExcess()
// 0x0000005B System.Void System.Collections.Generic.HashSet`1::Initialize(System.Int32)
// 0x0000005C System.Void System.Collections.Generic.HashSet`1::IncreaseCapacity()
// 0x0000005D System.Void System.Collections.Generic.HashSet`1::SetCapacity(System.Int32)
// 0x0000005E System.Boolean System.Collections.Generic.HashSet`1::AddIfNotPresent(T)
// 0x0000005F System.Void System.Collections.Generic.HashSet`1::AddValue(System.Int32,System.Int32,T)
// 0x00000060 System.Boolean System.Collections.Generic.HashSet`1::AreEqualityComparersEqual(System.Collections.Generic.HashSet`1<T>,System.Collections.Generic.HashSet`1<T>)
// 0x00000061 System.Int32 System.Collections.Generic.HashSet`1::InternalGetHashCode(T)
// 0x00000062 System.Void System.Collections.Generic.HashSet`1/Enumerator::.ctor(System.Collections.Generic.HashSet`1<T>)
// 0x00000063 System.Void System.Collections.Generic.HashSet`1/Enumerator::Dispose()
// 0x00000064 System.Boolean System.Collections.Generic.HashSet`1/Enumerator::MoveNext()
// 0x00000065 T System.Collections.Generic.HashSet`1/Enumerator::get_Current()
// 0x00000066 System.Object System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.get_Current()
// 0x00000067 System.Void System.Collections.Generic.HashSet`1/Enumerator::System.Collections.IEnumerator.Reset()
static Il2CppMethodPointer s_methodPointers[103] = 
{
	Error_ArgumentNull_m0EDA0D46D72CA692518E3E2EB75B48044D8FD41E,
	Error_MoreThanOneMatch_m4C4756AF34A76EF12F3B2B6D8C78DE547F0FBCF8,
	Error_NoElements_mB89E91246572F009281D79730950808F17C3F353,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
	NULL,
};
static const int32_t s_InvokerIndices[103] = 
{
	2980,
	3094,
	3094,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
	-1,
};
static const Il2CppTokenRangePair s_rgctxIndices[28] = 
{
	{ 0x02000004, { 47, 4 } },
	{ 0x02000005, { 51, 9 } },
	{ 0x02000006, { 60, 7 } },
	{ 0x02000007, { 67, 10 } },
	{ 0x02000008, { 77, 1 } },
	{ 0x0200000A, { 78, 3 } },
	{ 0x0200000B, { 83, 5 } },
	{ 0x0200000C, { 88, 7 } },
	{ 0x0200000D, { 95, 3 } },
	{ 0x0200000E, { 98, 7 } },
	{ 0x0200000F, { 105, 4 } },
	{ 0x02000010, { 109, 34 } },
	{ 0x02000012, { 143, 2 } },
	{ 0x06000004, { 0, 10 } },
	{ 0x06000005, { 10, 5 } },
	{ 0x06000006, { 15, 2 } },
	{ 0x06000007, { 17, 1 } },
	{ 0x06000008, { 18, 3 } },
	{ 0x06000009, { 21, 2 } },
	{ 0x0600000A, { 23, 4 } },
	{ 0x0600000B, { 27, 4 } },
	{ 0x0600000C, { 31, 3 } },
	{ 0x0600000D, { 34, 1 } },
	{ 0x0600000E, { 35, 3 } },
	{ 0x0600000F, { 38, 2 } },
	{ 0x06000010, { 40, 2 } },
	{ 0x06000011, { 42, 5 } },
	{ 0x0600002F, { 81, 2 } },
};
static const Il2CppRGCTXDefinition s_rgctxValues[145] = 
{
	{ (Il2CppRGCTXDataType)2, 1298 },
	{ (Il2CppRGCTXDataType)3, 5166 },
	{ (Il2CppRGCTXDataType)2, 2213 },
	{ (Il2CppRGCTXDataType)2, 1881 },
	{ (Il2CppRGCTXDataType)3, 9124 },
	{ (Il2CppRGCTXDataType)2, 1375 },
	{ (Il2CppRGCTXDataType)2, 1885 },
	{ (Il2CppRGCTXDataType)3, 9137 },
	{ (Il2CppRGCTXDataType)2, 1883 },
	{ (Il2CppRGCTXDataType)3, 9130 },
	{ (Il2CppRGCTXDataType)2, 489 },
	{ (Il2CppRGCTXDataType)3, 19 },
	{ (Il2CppRGCTXDataType)3, 20 },
	{ (Il2CppRGCTXDataType)2, 880 },
	{ (Il2CppRGCTXDataType)3, 3743 },
	{ (Il2CppRGCTXDataType)2, 1672 },
	{ (Il2CppRGCTXDataType)3, 8027 },
	{ (Il2CppRGCTXDataType)3, 4178 },
	{ (Il2CppRGCTXDataType)2, 551 },
	{ (Il2CppRGCTXDataType)3, 609 },
	{ (Il2CppRGCTXDataType)3, 610 },
	{ (Il2CppRGCTXDataType)2, 1376 },
	{ (Il2CppRGCTXDataType)3, 5457 },
	{ (Il2CppRGCTXDataType)2, 1237 },
	{ (Il2CppRGCTXDataType)2, 962 },
	{ (Il2CppRGCTXDataType)2, 1046 },
	{ (Il2CppRGCTXDataType)2, 1099 },
	{ (Il2CppRGCTXDataType)2, 1238 },
	{ (Il2CppRGCTXDataType)2, 963 },
	{ (Il2CppRGCTXDataType)2, 1047 },
	{ (Il2CppRGCTXDataType)2, 1100 },
	{ (Il2CppRGCTXDataType)2, 1048 },
	{ (Il2CppRGCTXDataType)2, 1101 },
	{ (Il2CppRGCTXDataType)3, 3744 },
	{ (Il2CppRGCTXDataType)2, 1039 },
	{ (Il2CppRGCTXDataType)2, 1040 },
	{ (Il2CppRGCTXDataType)2, 1097 },
	{ (Il2CppRGCTXDataType)3, 3742 },
	{ (Il2CppRGCTXDataType)2, 961 },
	{ (Il2CppRGCTXDataType)2, 1045 },
	{ (Il2CppRGCTXDataType)2, 960 },
	{ (Il2CppRGCTXDataType)3, 11028 },
	{ (Il2CppRGCTXDataType)3, 3300 },
	{ (Il2CppRGCTXDataType)2, 788 },
	{ (Il2CppRGCTXDataType)2, 1042 },
	{ (Il2CppRGCTXDataType)2, 1098 },
	{ (Il2CppRGCTXDataType)2, 1150 },
	{ (Il2CppRGCTXDataType)3, 5167 },
	{ (Il2CppRGCTXDataType)3, 5169 },
	{ (Il2CppRGCTXDataType)2, 366 },
	{ (Il2CppRGCTXDataType)3, 5168 },
	{ (Il2CppRGCTXDataType)3, 5177 },
	{ (Il2CppRGCTXDataType)2, 1301 },
	{ (Il2CppRGCTXDataType)2, 1884 },
	{ (Il2CppRGCTXDataType)3, 9131 },
	{ (Il2CppRGCTXDataType)3, 5178 },
	{ (Il2CppRGCTXDataType)2, 1072 },
	{ (Il2CppRGCTXDataType)2, 1119 },
	{ (Il2CppRGCTXDataType)3, 3749 },
	{ (Il2CppRGCTXDataType)3, 11023 },
	{ (Il2CppRGCTXDataType)3, 5170 },
	{ (Il2CppRGCTXDataType)2, 1300 },
	{ (Il2CppRGCTXDataType)2, 1882 },
	{ (Il2CppRGCTXDataType)3, 9125 },
	{ (Il2CppRGCTXDataType)3, 3748 },
	{ (Il2CppRGCTXDataType)3, 5171 },
	{ (Il2CppRGCTXDataType)3, 11022 },
	{ (Il2CppRGCTXDataType)3, 5184 },
	{ (Il2CppRGCTXDataType)2, 1302 },
	{ (Il2CppRGCTXDataType)2, 1886 },
	{ (Il2CppRGCTXDataType)3, 9138 },
	{ (Il2CppRGCTXDataType)3, 5500 },
	{ (Il2CppRGCTXDataType)3, 2735 },
	{ (Il2CppRGCTXDataType)3, 3750 },
	{ (Il2CppRGCTXDataType)3, 2734 },
	{ (Il2CppRGCTXDataType)3, 5185 },
	{ (Il2CppRGCTXDataType)3, 11024 },
	{ (Il2CppRGCTXDataType)3, 3747 },
	{ (Il2CppRGCTXDataType)2, 490 },
	{ (Il2CppRGCTXDataType)3, 23 },
	{ (Il2CppRGCTXDataType)3, 8014 },
	{ (Il2CppRGCTXDataType)2, 1673 },
	{ (Il2CppRGCTXDataType)3, 8028 },
	{ (Il2CppRGCTXDataType)2, 552 },
	{ (Il2CppRGCTXDataType)3, 611 },
	{ (Il2CppRGCTXDataType)3, 8020 },
	{ (Il2CppRGCTXDataType)3, 2715 },
	{ (Il2CppRGCTXDataType)2, 383 },
	{ (Il2CppRGCTXDataType)3, 8015 },
	{ (Il2CppRGCTXDataType)2, 1669 },
	{ (Il2CppRGCTXDataType)3, 637 },
	{ (Il2CppRGCTXDataType)2, 564 },
	{ (Il2CppRGCTXDataType)2, 774 },
	{ (Il2CppRGCTXDataType)3, 2721 },
	{ (Il2CppRGCTXDataType)3, 8016 },
	{ (Il2CppRGCTXDataType)3, 2710 },
	{ (Il2CppRGCTXDataType)3, 2711 },
	{ (Il2CppRGCTXDataType)3, 2709 },
	{ (Il2CppRGCTXDataType)3, 2712 },
	{ (Il2CppRGCTXDataType)2, 770 },
	{ (Il2CppRGCTXDataType)2, 2277 },
	{ (Il2CppRGCTXDataType)3, 3746 },
	{ (Il2CppRGCTXDataType)3, 2714 },
	{ (Il2CppRGCTXDataType)2, 1025 },
	{ (Il2CppRGCTXDataType)3, 2713 },
	{ (Il2CppRGCTXDataType)2, 964 },
	{ (Il2CppRGCTXDataType)2, 2237 },
	{ (Il2CppRGCTXDataType)2, 1051 },
	{ (Il2CppRGCTXDataType)2, 1102 },
	{ (Il2CppRGCTXDataType)3, 3316 },
	{ (Il2CppRGCTXDataType)2, 796 },
	{ (Il2CppRGCTXDataType)3, 4016 },
	{ (Il2CppRGCTXDataType)3, 4017 },
	{ (Il2CppRGCTXDataType)2, 939 },
	{ (Il2CppRGCTXDataType)3, 4020 },
	{ (Il2CppRGCTXDataType)2, 939 },
	{ (Il2CppRGCTXDataType)3, 4021 },
	{ (Il2CppRGCTXDataType)2, 965 },
	{ (Il2CppRGCTXDataType)3, 4025 },
	{ (Il2CppRGCTXDataType)3, 4029 },
	{ (Il2CppRGCTXDataType)3, 4028 },
	{ (Il2CppRGCTXDataType)2, 2291 },
	{ (Il2CppRGCTXDataType)3, 4019 },
	{ (Il2CppRGCTXDataType)3, 4018 },
	{ (Il2CppRGCTXDataType)3, 4026 },
	{ (Il2CppRGCTXDataType)2, 1158 },
	{ (Il2CppRGCTXDataType)3, 4023 },
	{ (Il2CppRGCTXDataType)3, 11388 },
	{ (Il2CppRGCTXDataType)2, 775 },
	{ (Il2CppRGCTXDataType)3, 2728 },
	{ (Il2CppRGCTXDataType)1, 1022 },
	{ (Il2CppRGCTXDataType)2, 2247 },
	{ (Il2CppRGCTXDataType)3, 4022 },
	{ (Il2CppRGCTXDataType)1, 2247 },
	{ (Il2CppRGCTXDataType)1, 1158 },
	{ (Il2CppRGCTXDataType)2, 2291 },
	{ (Il2CppRGCTXDataType)2, 2247 },
	{ (Il2CppRGCTXDataType)2, 1053 },
	{ (Il2CppRGCTXDataType)2, 1104 },
	{ (Il2CppRGCTXDataType)3, 4027 },
	{ (Il2CppRGCTXDataType)3, 4024 },
	{ (Il2CppRGCTXDataType)3, 4030 },
	{ (Il2CppRGCTXDataType)2, 275 },
	{ (Il2CppRGCTXDataType)3, 2736 },
	{ (Il2CppRGCTXDataType)2, 372 },
};
extern const CustomAttributesCacheGenerator g_System_Core_AttributeGenerators[];
IL2CPP_EXTERN_C const Il2CppCodeGenModule g_System_Core_CodeGenModule;
const Il2CppCodeGenModule g_System_Core_CodeGenModule = 
{
	"System.Core.dll",
	103,
	s_methodPointers,
	0,
	NULL,
	s_InvokerIndices,
	0,
	NULL,
	28,
	s_rgctxIndices,
	145,
	s_rgctxValues,
	NULL,
	g_System_Core_AttributeGenerators,
	NULL, // module initializer,
	NULL,
	NULL,
	NULL,
};
