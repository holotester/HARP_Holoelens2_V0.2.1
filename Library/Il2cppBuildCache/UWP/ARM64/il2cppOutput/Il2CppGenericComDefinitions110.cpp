#include "pch-cpp.hpp"

#ifndef _MSC_VER
# include <alloca.h>
#else
# include <malloc.h>
#endif


#include <stdint.h>
#include <limits>



// System.Delegate[]
struct DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8;
// System.AsyncCallback
struct AsyncCallback_tA7921BEF974919C46FF8F9D9867C567B200BB0EA;
// System.DelegateData
struct DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288;
// System.IAsyncResult
struct IAsyncResult_tC9F97BF36FCF122D29D3101D80642278297BF370;
// Windows.Media.Capture.MediaCaptureFailedEventArgs
struct MediaCaptureFailedEventArgs_t367A678799346B060B956D7A09266A9E4D198A21;
// System.Reflection.MethodInfo
struct MethodInfo_t;
// Photon.Voice.UWP.MediaExtensions.Packet
struct Packet_t60F5A459127FE6FC040FA9C87ADAF00102F3BEF5;
// System.String
struct String_t;
// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5;
// Photon.Voice.UWP.MediaExtensions.__IPacketFactory
struct __IPacketFactory_tC6B7A0E9D8B8E31C54AEE0D0FC20DDC7086ED047;

struct Delegate_t_marshaled_com;
struct Delegate_t_marshaled_pinvoke;
struct IMediaCaptureFailedEventArgs_t7DF1155C49DD8AEA9E834484125B15B6EC716286;
struct __IPacketPublicNonVirtuals_t3C02E8CE0581936284914AA2934844CC3E403AE3;


IL2CPP_EXTERN_C_BEGIN
IL2CPP_EXTERN_C_END

#ifdef __clang__
#pragma clang diagnostic push
#pragma clang diagnostic ignored "-Winvalid-offsetof"
#pragma clang diagnostic ignored "-Wunused-variable"
#endif
// Windows.Media.Capture.IMediaCaptureFailedEventArgs
struct NOVTABLE IMediaCaptureFailedEventArgs_t7DF1155C49DD8AEA9E834484125B15B6EC716286 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureFailedEventArgs_get_Message_mE5A728179CEDF4E800E79B29220C2864E57338AC(Il2CppHString* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL IMediaCaptureFailedEventArgs_U24__Stripped0_get_Code_m10F983AF424DDB671544D5E23C1965DC80EDC65B() = 0;
};

// System.Object

// Photon.Voice.UWP.MediaExtensions.__IPacketFactory
struct NOVTABLE __IPacketFactory_tC6B7A0E9D8B8E31C54AEE0D0FC20DDC7086ED047 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL __IPacketFactory_U24__Stripped0_CreateInstance_m2FC8379F507C114B824284A5897B6B96786772F2() = 0;
};
// Photon.Voice.UWP.MediaExtensions.__IPacketPublicNonVirtuals
struct NOVTABLE __IPacketPublicNonVirtuals_t3C02E8CE0581936284914AA2934844CC3E403AE3 : Il2CppIInspectable
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL __IPacketPublicNonVirtuals_get_Buffer_m22A9D25E95C8216F0CAA0FC427F4C05EE353C060(uint32_t* comReturnValueArraySize, uint8_t** comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL __IPacketPublicNonVirtuals_U24__Stripped0_set_Buffer_m0FE9BB50894D1C705F626815F6B62ECDC02BDE57() = 0;
	virtual il2cpp_hresult_t STDCALL __IPacketPublicNonVirtuals_get_Keyframe_m43CB7E9C8760C7C3000F525DA92F97D693516BF1(bool* comReturnValue) = 0;
	virtual il2cpp_hresult_t STDCALL __IPacketPublicNonVirtuals_U24__Stripped1_set_Keyframe_m21C220B50B18CCB954138A1450A652CFFB23C182() = 0;
};

// System.String
struct String_t  : public RuntimeObject
{
public:
	// System.Int32 System.String::m_stringLength
	int32_t ___m_stringLength_0;
	// System.Char System.String::m_firstChar
	Il2CppChar ___m_firstChar_1;

public:
	inline static int32_t get_offset_of_m_stringLength_0() { return static_cast<int32_t>(offsetof(String_t, ___m_stringLength_0)); }
	inline int32_t get_m_stringLength_0() const { return ___m_stringLength_0; }
	inline int32_t* get_address_of_m_stringLength_0() { return &___m_stringLength_0; }
	inline void set_m_stringLength_0(int32_t value)
	{
		___m_stringLength_0 = value;
	}

	inline static int32_t get_offset_of_m_firstChar_1() { return static_cast<int32_t>(offsetof(String_t, ___m_firstChar_1)); }
	inline Il2CppChar get_m_firstChar_1() const { return ___m_firstChar_1; }
	inline Il2CppChar* get_address_of_m_firstChar_1() { return &___m_firstChar_1; }
	inline void set_m_firstChar_1(Il2CppChar value)
	{
		___m_firstChar_1 = value;
	}
};

struct String_t_StaticFields
{
public:
	// System.String System.String::Empty
	String_t* ___Empty_5;

public:
	inline static int32_t get_offset_of_Empty_5() { return static_cast<int32_t>(offsetof(String_t_StaticFields, ___Empty_5)); }
	inline String_t* get_Empty_5() const { return ___Empty_5; }
	inline String_t** get_address_of_Empty_5() { return &___Empty_5; }
	inline void set_Empty_5(String_t* value)
	{
		___Empty_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___Empty_5), (void*)value);
	}
};


// System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52  : public RuntimeObject
{
public:

public:
};

// Native definition for P/Invoke marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_pinvoke
{
};
// Native definition for COM marshalling of System.ValueType
struct ValueType_tDBF999C1B75C48C68621878250DBF6CDBCF51E52_marshaled_com
{
};

// System.__Il2CppComObject


// System.Boolean
struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37 
{
public:
	// System.Boolean System.Boolean::m_value
	bool ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37, ___m_value_0)); }
	inline bool get_m_value_0() const { return ___m_value_0; }
	inline bool* get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(bool value)
	{
		___m_value_0 = value;
	}
};

struct Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields
{
public:
	// System.String System.Boolean::TrueString
	String_t* ___TrueString_5;
	// System.String System.Boolean::FalseString
	String_t* ___FalseString_6;

public:
	inline static int32_t get_offset_of_TrueString_5() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___TrueString_5)); }
	inline String_t* get_TrueString_5() const { return ___TrueString_5; }
	inline String_t** get_address_of_TrueString_5() { return &___TrueString_5; }
	inline void set_TrueString_5(String_t* value)
	{
		___TrueString_5 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___TrueString_5), (void*)value);
	}

	inline static int32_t get_offset_of_FalseString_6() { return static_cast<int32_t>(offsetof(Boolean_t07D1E3F34E4813023D64F584DFF7B34C9D922F37_StaticFields, ___FalseString_6)); }
	inline String_t* get_FalseString_6() const { return ___FalseString_6; }
	inline String_t** get_address_of_FalseString_6() { return &___FalseString_6; }
	inline void set_FalseString_6(String_t* value)
	{
		___FalseString_6 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___FalseString_6), (void*)value);
	}
};


// System.IntPtr
struct IntPtr_t 
{
public:
	// System.Void* System.IntPtr::m_value
	void* ___m_value_0;

public:
	inline static int32_t get_offset_of_m_value_0() { return static_cast<int32_t>(offsetof(IntPtr_t, ___m_value_0)); }
	inline void* get_m_value_0() const { return ___m_value_0; }
	inline void** get_address_of_m_value_0() { return &___m_value_0; }
	inline void set_m_value_0(void* value)
	{
		___m_value_0 = value;
	}
};

struct IntPtr_t_StaticFields
{
public:
	// System.IntPtr System.IntPtr::Zero
	intptr_t ___Zero_1;

public:
	inline static int32_t get_offset_of_Zero_1() { return static_cast<int32_t>(offsetof(IntPtr_t_StaticFields, ___Zero_1)); }
	inline intptr_t get_Zero_1() const { return ___Zero_1; }
	inline intptr_t* get_address_of_Zero_1() { return &___Zero_1; }
	inline void set_Zero_1(intptr_t value)
	{
		___Zero_1 = value;
	}
};


// Windows.Media.Capture.MediaCaptureFailedEventArgs
struct MediaCaptureFailedEventArgs_t367A678799346B060B956D7A09266A9E4D198A21  : public Il2CppComObject
{
public:

public:
};


// Photon.Voice.UWP.MediaExtensions.Packet
struct Packet_t60F5A459127FE6FC040FA9C87ADAF00102F3BEF5  : public Il2CppComObject
{
public:

public:
};

struct Packet_t60F5A459127FE6FC040FA9C87ADAF00102F3BEF5_StaticFields
{
public:
	// Cached pointer to IActivationFactory
	Il2CppIActivationFactory* activationFactory;
	// Cached pointer to Photon.Voice.UWP.MediaExtensions.__IPacketFactory
	__IPacketFactory_tC6B7A0E9D8B8E31C54AEE0D0FC20DDC7086ED047* ____ipacketFactory_tC6B7A0E9D8B8E31C54AEE0D0FC20DDC7086ED047;

public:
	inline Il2CppIActivationFactory* get_activationFactory()
	{
		Il2CppIActivationFactory* returnValue = activationFactory;
		if (returnValue == NULL)
		{
			il2cpp::utils::StringView<Il2CppNativeChar> className(IL2CPP_NATIVE_STRING("Photon.Voice.UWP.MediaExtensions.Packet"));
			returnValue = il2cpp_codegen_windows_runtime_get_activation_factory(className);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&activationFactory), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = activationFactory;
			}
		}
		return returnValue;
	}

	inline __IPacketFactory_tC6B7A0E9D8B8E31C54AEE0D0FC20DDC7086ED047* get_____ipacketFactory_tC6B7A0E9D8B8E31C54AEE0D0FC20DDC7086ED047()
	{
		__IPacketFactory_tC6B7A0E9D8B8E31C54AEE0D0FC20DDC7086ED047* returnValue = ____ipacketFactory_tC6B7A0E9D8B8E31C54AEE0D0FC20DDC7086ED047;
		if (returnValue == NULL)
		{
			const il2cpp_hresult_t hr = get_activationFactory()->QueryInterface(__IPacketFactory_tC6B7A0E9D8B8E31C54AEE0D0FC20DDC7086ED047::IID, reinterpret_cast<void**>(&returnValue));
			il2cpp_codegen_com_raise_exception_if_failed(hr, false);

			if (il2cpp_codegen_atomic_compare_exchange_pointer((void**)(&____ipacketFactory_tC6B7A0E9D8B8E31C54AEE0D0FC20DDC7086ED047), returnValue, NULL) != NULL)
			{
				returnValue->Release();
				returnValue = ____ipacketFactory_tC6B7A0E9D8B8E31C54AEE0D0FC20DDC7086ED047;
			}
		}
		return returnValue;
	}
};


// System.Void
struct Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5 
{
public:
	union
	{
		struct
		{
		};
		uint8_t Void_t700C6383A2A510C2CF4DD86DABD5CA9FF70ADAC5__padding[1];
	};

public:
};


// System.Delegate
struct Delegate_t  : public RuntimeObject
{
public:
	// System.IntPtr System.Delegate::method_ptr
	Il2CppMethodPointer ___method_ptr_0;
	// System.IntPtr System.Delegate::invoke_impl
	intptr_t ___invoke_impl_1;
	// System.Object System.Delegate::m_target
	RuntimeObject * ___m_target_2;
	// System.IntPtr System.Delegate::method
	intptr_t ___method_3;
	// System.IntPtr System.Delegate::delegate_trampoline
	intptr_t ___delegate_trampoline_4;
	// System.IntPtr System.Delegate::extra_arg
	intptr_t ___extra_arg_5;
	// System.IntPtr System.Delegate::method_code
	intptr_t ___method_code_6;
	// System.Reflection.MethodInfo System.Delegate::method_info
	MethodInfo_t * ___method_info_7;
	// System.Reflection.MethodInfo System.Delegate::original_method_info
	MethodInfo_t * ___original_method_info_8;
	// System.DelegateData System.Delegate::data
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	// System.Boolean System.Delegate::method_is_virtual
	bool ___method_is_virtual_10;

public:
	inline static int32_t get_offset_of_method_ptr_0() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_ptr_0)); }
	inline Il2CppMethodPointer get_method_ptr_0() const { return ___method_ptr_0; }
	inline Il2CppMethodPointer* get_address_of_method_ptr_0() { return &___method_ptr_0; }
	inline void set_method_ptr_0(Il2CppMethodPointer value)
	{
		___method_ptr_0 = value;
	}

	inline static int32_t get_offset_of_invoke_impl_1() { return static_cast<int32_t>(offsetof(Delegate_t, ___invoke_impl_1)); }
	inline intptr_t get_invoke_impl_1() const { return ___invoke_impl_1; }
	inline intptr_t* get_address_of_invoke_impl_1() { return &___invoke_impl_1; }
	inline void set_invoke_impl_1(intptr_t value)
	{
		___invoke_impl_1 = value;
	}

	inline static int32_t get_offset_of_m_target_2() { return static_cast<int32_t>(offsetof(Delegate_t, ___m_target_2)); }
	inline RuntimeObject * get_m_target_2() const { return ___m_target_2; }
	inline RuntimeObject ** get_address_of_m_target_2() { return &___m_target_2; }
	inline void set_m_target_2(RuntimeObject * value)
	{
		___m_target_2 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___m_target_2), (void*)value);
	}

	inline static int32_t get_offset_of_method_3() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_3)); }
	inline intptr_t get_method_3() const { return ___method_3; }
	inline intptr_t* get_address_of_method_3() { return &___method_3; }
	inline void set_method_3(intptr_t value)
	{
		___method_3 = value;
	}

	inline static int32_t get_offset_of_delegate_trampoline_4() { return static_cast<int32_t>(offsetof(Delegate_t, ___delegate_trampoline_4)); }
	inline intptr_t get_delegate_trampoline_4() const { return ___delegate_trampoline_4; }
	inline intptr_t* get_address_of_delegate_trampoline_4() { return &___delegate_trampoline_4; }
	inline void set_delegate_trampoline_4(intptr_t value)
	{
		___delegate_trampoline_4 = value;
	}

	inline static int32_t get_offset_of_extra_arg_5() { return static_cast<int32_t>(offsetof(Delegate_t, ___extra_arg_5)); }
	inline intptr_t get_extra_arg_5() const { return ___extra_arg_5; }
	inline intptr_t* get_address_of_extra_arg_5() { return &___extra_arg_5; }
	inline void set_extra_arg_5(intptr_t value)
	{
		___extra_arg_5 = value;
	}

	inline static int32_t get_offset_of_method_code_6() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_code_6)); }
	inline intptr_t get_method_code_6() const { return ___method_code_6; }
	inline intptr_t* get_address_of_method_code_6() { return &___method_code_6; }
	inline void set_method_code_6(intptr_t value)
	{
		___method_code_6 = value;
	}

	inline static int32_t get_offset_of_method_info_7() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_info_7)); }
	inline MethodInfo_t * get_method_info_7() const { return ___method_info_7; }
	inline MethodInfo_t ** get_address_of_method_info_7() { return &___method_info_7; }
	inline void set_method_info_7(MethodInfo_t * value)
	{
		___method_info_7 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___method_info_7), (void*)value);
	}

	inline static int32_t get_offset_of_original_method_info_8() { return static_cast<int32_t>(offsetof(Delegate_t, ___original_method_info_8)); }
	inline MethodInfo_t * get_original_method_info_8() const { return ___original_method_info_8; }
	inline MethodInfo_t ** get_address_of_original_method_info_8() { return &___original_method_info_8; }
	inline void set_original_method_info_8(MethodInfo_t * value)
	{
		___original_method_info_8 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___original_method_info_8), (void*)value);
	}

	inline static int32_t get_offset_of_data_9() { return static_cast<int32_t>(offsetof(Delegate_t, ___data_9)); }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * get_data_9() const { return ___data_9; }
	inline DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 ** get_address_of_data_9() { return &___data_9; }
	inline void set_data_9(DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * value)
	{
		___data_9 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___data_9), (void*)value);
	}

	inline static int32_t get_offset_of_method_is_virtual_10() { return static_cast<int32_t>(offsetof(Delegate_t, ___method_is_virtual_10)); }
	inline bool get_method_is_virtual_10() const { return ___method_is_virtual_10; }
	inline bool* get_address_of_method_is_virtual_10() { return &___method_is_virtual_10; }
	inline void set_method_is_virtual_10(bool value)
	{
		___method_is_virtual_10 = value;
	}
};

// Native definition for P/Invoke marshalling of System.Delegate
struct Delegate_t_marshaled_pinvoke
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};
// Native definition for COM marshalling of System.Delegate
struct Delegate_t_marshaled_com
{
	intptr_t ___method_ptr_0;
	intptr_t ___invoke_impl_1;
	Il2CppIUnknown* ___m_target_2;
	intptr_t ___method_3;
	intptr_t ___delegate_trampoline_4;
	intptr_t ___extra_arg_5;
	intptr_t ___method_code_6;
	MethodInfo_t * ___method_info_7;
	MethodInfo_t * ___original_method_info_8;
	DelegateData_t17DD30660E330C49381DAA99F934BE75CB11F288 * ___data_9;
	int32_t ___method_is_virtual_10;
};

// System.MulticastDelegate
struct MulticastDelegate_t  : public Delegate_t
{
public:
	// System.Delegate[] System.MulticastDelegate::delegates
	DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* ___delegates_11;

public:
	inline static int32_t get_offset_of_delegates_11() { return static_cast<int32_t>(offsetof(MulticastDelegate_t, ___delegates_11)); }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* get_delegates_11() const { return ___delegates_11; }
	inline DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8** get_address_of_delegates_11() { return &___delegates_11; }
	inline void set_delegates_11(DelegateU5BU5D_t677D8FE08A5F99E8EE49150B73966CD6E9BF7DB8* value)
	{
		___delegates_11 = value;
		Il2CppCodeGenWriteBarrier((void**)(&___delegates_11), (void*)value);
	}
};

// Native definition for P/Invoke marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_pinvoke : public Delegate_t_marshaled_pinvoke
{
	Delegate_t_marshaled_pinvoke** ___delegates_11;
};
// Native definition for COM marshalling of System.MulticastDelegate
struct MulticastDelegate_t_marshaled_com : public Delegate_t_marshaled_com
{
	Delegate_t_marshaled_com** ___delegates_11;
};

// System.EventHandler`1<System.Boolean>
struct EventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for System.EventHandler`1<System.Boolean>
struct IEventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, bool ___e1) = 0;
};


// System.EventHandler`1<Windows.Media.Capture.MediaCaptureFailedEventArgs>
struct EventHandler_1_tA01F51809CEE84209F88BC94B4CAFBA9F3EB5AC8  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for System.EventHandler`1<Windows.Media.Capture.MediaCaptureFailedEventArgs>
struct IEventHandler_1_tA01F51809CEE84209F88BC94B4CAFBA9F3EB5AC8_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, IMediaCaptureFailedEventArgs_t7DF1155C49DD8AEA9E834484125B15B6EC716286* ___e1) = 0;
};


// System.EventHandler`1<System.Object>
struct EventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for System.EventHandler`1<System.Object>
struct IEventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, Il2CppIInspectable* ___e1) = 0;
};


// System.EventHandler`1<Photon.Voice.UWP.MediaExtensions.Packet>
struct EventHandler_1_t29A74F12FC72FFA3ABB1164759EA247723C6E323  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for System.EventHandler`1<Photon.Voice.UWP.MediaExtensions.Packet>
struct IEventHandler_1_t29A74F12FC72FFA3ABB1164759EA247723C6E323_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, __IPacketPublicNonVirtuals_t3C02E8CE0581936284914AA2934844CC3E403AE3* ___e1) = 0;
};


// System.EventHandler`1<System.String>
struct EventHandler_1_t6A579CB55D891516A27F625D20C2DECA5C0992F7  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for System.EventHandler`1<System.String>
struct IEventHandler_1_t6A579CB55D891516A27F625D20C2DECA5C0992F7_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, Il2CppHString ___e1) = 0;
};


// Windows.Foundation.EventHandler`1<System.Boolean>
struct EventHandler_1_t85F4540152B2A58144B570A649A114521DEE8893  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.EventHandler`1<System.Boolean>
struct IEventHandler_1_t85F4540152B2A58144B570A649A114521DEE8893_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, bool ___args1) = 0;
};


// Windows.Foundation.EventHandler`1<Windows.Media.Capture.MediaCaptureFailedEventArgs>
struct EventHandler_1_t37BDE1AB6C974577508079D7B87815C82DF7A985  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.EventHandler`1<Windows.Media.Capture.MediaCaptureFailedEventArgs>
struct IEventHandler_1_t37BDE1AB6C974577508079D7B87815C82DF7A985_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, IMediaCaptureFailedEventArgs_t7DF1155C49DD8AEA9E834484125B15B6EC716286* ___args1) = 0;
};


// Windows.Foundation.EventHandler`1<System.Object>
struct EventHandler_1_t73968F2558235E2E8274933705EFBFF5F58D02E5  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.EventHandler`1<System.Object>
struct IEventHandler_1_t73968F2558235E2E8274933705EFBFF5F58D02E5_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, Il2CppIInspectable* ___args1) = 0;
};


// Windows.Foundation.EventHandler`1<Photon.Voice.UWP.MediaExtensions.Packet>
struct EventHandler_1_tD47438CFDFBC2791451FC40AA15C772AEE6CDA6F  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.EventHandler`1<Photon.Voice.UWP.MediaExtensions.Packet>
struct IEventHandler_1_tD47438CFDFBC2791451FC40AA15C772AEE6CDA6F_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, __IPacketPublicNonVirtuals_t3C02E8CE0581936284914AA2934844CC3E403AE3* ___args1) = 0;
};


// Windows.Foundation.EventHandler`1<System.String>
struct EventHandler_1_t583B58BD02D1F7690D103A4ACCF82E4EDA59729D  : public MulticastDelegate_t
{
public:

public:
};

// COM Callable Wrapper interface definition for Windows.Foundation.EventHandler`1<System.String>
struct IEventHandler_1_t583B58BD02D1F7690D103A4ACCF82E4EDA59729D_ComCallableWrapper : Il2CppIUnknown
{
	static const Il2CppGuid IID;
	virtual il2cpp_hresult_t STDCALL Invoke(Il2CppIInspectable* ___sender0, Il2CppHString ___args1) = 0;
};

#ifdef __clang__
#pragma clang diagnostic pop
#endif



const Il2CppGuid IEventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4_ComCallableWrapper::IID = { 0x6ea71ff9, 0x100d, 0x54c3, 0xbb, 0x4a, 0x69, 0x22, 0x52, 0x3c, 0xf9, 0xa9 };
// Native invoker for System.EventHandler`1<System.Boolean>
IL2CPP_EXTERN_C  void EventHandler_1_Invoke_mE303EBA42431C41184892A2BBA1E8014555FEEF4_NativeInvoker (Il2CppComObject * __this, RuntimeObject * ___sender0, bool ___e1, const RuntimeMethod* method)
{
	IEventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4_ComCallableWrapper* ____eventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4 = il2cpp_codegen_com_query_interface<IEventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4_ComCallableWrapper>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___sender0' to native representation
	Il2CppIInspectable* ____sender0_marshaled = NULL;
	if (___sender0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___sender0))
		{
			____sender0_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(___sender0));
			(____sender0_marshaled)->AddRef();
		}
		else
		{
			____sender0_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___sender0);
		}
	}
	else
	{
		____sender0_marshaled = NULL;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____eventHandler_1_t994FC03893A01AFB9B845A9BE12AC4D663E7E2B4->Invoke(____sender0_marshaled, ___e1);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___sender0' native representation
	if (____sender0_marshaled != NULL)
	{
		(____sender0_marshaled)->Release();
		____sender0_marshaled = NULL;
	}

}
const Il2CppGuid IEventHandler_1_tA01F51809CEE84209F88BC94B4CAFBA9F3EB5AC8_ComCallableWrapper::IID = { 0x15686454, 0x3f2c, 0x543b, 0xb5, 0x2d, 0x2c, 0xf8, 0xdc, 0xdc, 0xb9, 0xec };
// Native invoker for System.EventHandler`1<Windows.Media.Capture.MediaCaptureFailedEventArgs>
IL2CPP_EXTERN_C  void EventHandler_1_Invoke_m02B5EDE8493713368FDBE05AC9A3B28923F06D23_NativeInvoker (Il2CppComObject * __this, RuntimeObject * ___sender0, MediaCaptureFailedEventArgs_t367A678799346B060B956D7A09266A9E4D198A21 * ___e1, const RuntimeMethod* method)
{
	IEventHandler_1_tA01F51809CEE84209F88BC94B4CAFBA9F3EB5AC8_ComCallableWrapper* ____eventHandler_1_tA01F51809CEE84209F88BC94B4CAFBA9F3EB5AC8 = il2cpp_codegen_com_query_interface<IEventHandler_1_tA01F51809CEE84209F88BC94B4CAFBA9F3EB5AC8_ComCallableWrapper>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___sender0' to native representation
	Il2CppIInspectable* ____sender0_marshaled = NULL;
	if (___sender0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___sender0))
		{
			____sender0_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(___sender0));
			(____sender0_marshaled)->AddRef();
		}
		else
		{
			____sender0_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___sender0);
		}
	}
	else
	{
		____sender0_marshaled = NULL;
	}

	// Marshaling of parameter '___e1' to native representation
	IMediaCaptureFailedEventArgs_t7DF1155C49DD8AEA9E834484125B15B6EC716286* ____e1_marshaled = NULL;
	if (___e1 != NULL)
	{
		____e1_marshaled = il2cpp_codegen_com_query_interface<IMediaCaptureFailedEventArgs_t7DF1155C49DD8AEA9E834484125B15B6EC716286>(static_cast<Il2CppComObject*>(___e1));
	}
	else
	{
		____e1_marshaled = NULL;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____eventHandler_1_tA01F51809CEE84209F88BC94B4CAFBA9F3EB5AC8->Invoke(____sender0_marshaled, ____e1_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___sender0' native representation
	if (____sender0_marshaled != NULL)
	{
		(____sender0_marshaled)->Release();
		____sender0_marshaled = NULL;
	}

}
const Il2CppGuid IEventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB_ComCallableWrapper::IID = { 0xc50898f6, 0xc536, 0x5f47, 0x85, 0x83, 0x8b, 0x2c, 0x24, 0x38, 0xa1, 0x3b };
// Native invoker for System.EventHandler`1<System.Object>
IL2CPP_EXTERN_C  void EventHandler_1_Invoke_mEAFD7F9E52E7DF356F3C4F0262BCFBA7769C83C0_NativeInvoker (Il2CppComObject * __this, RuntimeObject * ___sender0, RuntimeObject * ___e1, const RuntimeMethod* method)
{
	IEventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB_ComCallableWrapper* ____eventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB = il2cpp_codegen_com_query_interface<IEventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB_ComCallableWrapper>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___sender0' to native representation
	Il2CppIInspectable* ____sender0_marshaled = NULL;
	if (___sender0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___sender0))
		{
			____sender0_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(___sender0));
			(____sender0_marshaled)->AddRef();
		}
		else
		{
			____sender0_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___sender0);
		}
	}
	else
	{
		____sender0_marshaled = NULL;
	}

	// Marshaling of parameter '___e1' to native representation
	Il2CppIInspectable* ____e1_marshaled = NULL;
	if (___e1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___e1))
		{
			____e1_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(___e1));
			(____e1_marshaled)->AddRef();
		}
		else
		{
			____e1_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___e1);
		}
	}
	else
	{
		____e1_marshaled = NULL;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____eventHandler_1_tFA1C30E54FA1061D79E711F65F9A174BFBD8CDCB->Invoke(____sender0_marshaled, ____e1_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___sender0' native representation
	if (____sender0_marshaled != NULL)
	{
		(____sender0_marshaled)->Release();
		____sender0_marshaled = NULL;
	}

	// Marshaling cleanup of parameter '___e1' native representation
	if (____e1_marshaled != NULL)
	{
		(____e1_marshaled)->Release();
		____e1_marshaled = NULL;
	}

}
const Il2CppGuid IEventHandler_1_t29A74F12FC72FFA3ABB1164759EA247723C6E323_ComCallableWrapper::IID = { 0x39e1844b, 0x81b6, 0x51b1, 0x91, 0x78, 0x3c, 0x3e, 0x20, 0x58, 0xf2, 0x24 };
// Native invoker for System.EventHandler`1<Photon.Voice.UWP.MediaExtensions.Packet>
IL2CPP_EXTERN_C  void EventHandler_1_Invoke_m8628D6B6E713139258972CF2B4608C8BA76A3B53_NativeInvoker (Il2CppComObject * __this, RuntimeObject * ___sender0, Packet_t60F5A459127FE6FC040FA9C87ADAF00102F3BEF5 * ___e1, const RuntimeMethod* method)
{
	IEventHandler_1_t29A74F12FC72FFA3ABB1164759EA247723C6E323_ComCallableWrapper* ____eventHandler_1_t29A74F12FC72FFA3ABB1164759EA247723C6E323 = il2cpp_codegen_com_query_interface<IEventHandler_1_t29A74F12FC72FFA3ABB1164759EA247723C6E323_ComCallableWrapper>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___sender0' to native representation
	Il2CppIInspectable* ____sender0_marshaled = NULL;
	if (___sender0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___sender0))
		{
			____sender0_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(___sender0));
			(____sender0_marshaled)->AddRef();
		}
		else
		{
			____sender0_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___sender0);
		}
	}
	else
	{
		____sender0_marshaled = NULL;
	}

	// Marshaling of parameter '___e1' to native representation
	__IPacketPublicNonVirtuals_t3C02E8CE0581936284914AA2934844CC3E403AE3* ____e1_marshaled = NULL;
	if (___e1 != NULL)
	{
		____e1_marshaled = il2cpp_codegen_com_query_interface<__IPacketPublicNonVirtuals_t3C02E8CE0581936284914AA2934844CC3E403AE3>(static_cast<Il2CppComObject*>(___e1));
	}
	else
	{
		____e1_marshaled = NULL;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____eventHandler_1_t29A74F12FC72FFA3ABB1164759EA247723C6E323->Invoke(____sender0_marshaled, ____e1_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___sender0' native representation
	if (____sender0_marshaled != NULL)
	{
		(____sender0_marshaled)->Release();
		____sender0_marshaled = NULL;
	}

}
const Il2CppGuid IEventHandler_1_t6A579CB55D891516A27F625D20C2DECA5C0992F7_ComCallableWrapper::IID = { 0xac4cb24b, 0xbf86, 0x5ab0, 0xbf, 0x9d, 0x55, 0x5e, 0x7d, 0x89, 0x76, 0x4a };
// Native invoker for System.EventHandler`1<System.String>
IL2CPP_EXTERN_C  void EventHandler_1_Invoke_mBD5A413A2764C7AD9C7C7B2BB0E06172E748C4E1_NativeInvoker (Il2CppComObject * __this, RuntimeObject * ___sender0, String_t* ___e1, const RuntimeMethod* method)
{
	IEventHandler_1_t6A579CB55D891516A27F625D20C2DECA5C0992F7_ComCallableWrapper* ____eventHandler_1_t6A579CB55D891516A27F625D20C2DECA5C0992F7 = il2cpp_codegen_com_query_interface<IEventHandler_1_t6A579CB55D891516A27F625D20C2DECA5C0992F7_ComCallableWrapper>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___sender0' to native representation
	Il2CppIInspectable* ____sender0_marshaled = NULL;
	if (___sender0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___sender0))
		{
			____sender0_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(___sender0));
			(____sender0_marshaled)->AddRef();
		}
		else
		{
			____sender0_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___sender0);
		}
	}
	else
	{
		____sender0_marshaled = NULL;
	}

	// Marshaling of parameter '___e1' to native representation
	Il2CppHString ____e1_marshaled = NULL;
	if (___e1 == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("e"), NULL);
	}

	DECLARE_IL2CPP_STRING_AS_STRING_VIEW_OF_NATIVE_CHARS(___e1NativeView, ___e1);
	il2cpp::utils::Il2CppHStringReference ___e1HStringReference(___e1NativeView);
	____e1_marshaled = ___e1HStringReference;

	// Native function invocation
	const il2cpp_hresult_t hr = ____eventHandler_1_t6A579CB55D891516A27F625D20C2DECA5C0992F7->Invoke(____sender0_marshaled, ____e1_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___sender0' native representation
	if (____sender0_marshaled != NULL)
	{
		(____sender0_marshaled)->Release();
		____sender0_marshaled = NULL;
	}

}
const Il2CppGuid IEventHandler_1_t85F4540152B2A58144B570A649A114521DEE8893_ComCallableWrapper::IID = { 0x6ea71ff9, 0x100d, 0x54c3, 0xbb, 0x4a, 0x69, 0x22, 0x52, 0x3c, 0xf9, 0xa9 };
// Native invoker for Windows.Foundation.EventHandler`1<System.Boolean>
IL2CPP_EXTERN_C  void EventHandler_1_Invoke_mEB1D1560F89884E9935758FCE811865B37476098_NativeInvoker (Il2CppComObject * __this, RuntimeObject * ___sender0, bool ___args1, const RuntimeMethod* method)
{
	IEventHandler_1_t85F4540152B2A58144B570A649A114521DEE8893_ComCallableWrapper* ____eventHandler_1_t85F4540152B2A58144B570A649A114521DEE8893 = il2cpp_codegen_com_query_interface<IEventHandler_1_t85F4540152B2A58144B570A649A114521DEE8893_ComCallableWrapper>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___sender0' to native representation
	Il2CppIInspectable* ____sender0_marshaled = NULL;
	if (___sender0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___sender0))
		{
			____sender0_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(___sender0));
			(____sender0_marshaled)->AddRef();
		}
		else
		{
			____sender0_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___sender0);
		}
	}
	else
	{
		____sender0_marshaled = NULL;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____eventHandler_1_t85F4540152B2A58144B570A649A114521DEE8893->Invoke(____sender0_marshaled, ___args1);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___sender0' native representation
	if (____sender0_marshaled != NULL)
	{
		(____sender0_marshaled)->Release();
		____sender0_marshaled = NULL;
	}

}
const Il2CppGuid IEventHandler_1_t37BDE1AB6C974577508079D7B87815C82DF7A985_ComCallableWrapper::IID = { 0x15686454, 0x3f2c, 0x543b, 0xb5, 0x2d, 0x2c, 0xf8, 0xdc, 0xdc, 0xb9, 0xec };
// Native invoker for Windows.Foundation.EventHandler`1<Windows.Media.Capture.MediaCaptureFailedEventArgs>
IL2CPP_EXTERN_C  void EventHandler_1_Invoke_mA205298FA44CC3A2DB78DD9D5FB89805A6F9DD41_NativeInvoker (Il2CppComObject * __this, RuntimeObject * ___sender0, MediaCaptureFailedEventArgs_t367A678799346B060B956D7A09266A9E4D198A21 * ___args1, const RuntimeMethod* method)
{
	IEventHandler_1_t37BDE1AB6C974577508079D7B87815C82DF7A985_ComCallableWrapper* ____eventHandler_1_t37BDE1AB6C974577508079D7B87815C82DF7A985 = il2cpp_codegen_com_query_interface<IEventHandler_1_t37BDE1AB6C974577508079D7B87815C82DF7A985_ComCallableWrapper>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___sender0' to native representation
	Il2CppIInspectable* ____sender0_marshaled = NULL;
	if (___sender0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___sender0))
		{
			____sender0_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(___sender0));
			(____sender0_marshaled)->AddRef();
		}
		else
		{
			____sender0_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___sender0);
		}
	}
	else
	{
		____sender0_marshaled = NULL;
	}

	// Marshaling of parameter '___args1' to native representation
	IMediaCaptureFailedEventArgs_t7DF1155C49DD8AEA9E834484125B15B6EC716286* ____args1_marshaled = NULL;
	if (___args1 != NULL)
	{
		____args1_marshaled = il2cpp_codegen_com_query_interface<IMediaCaptureFailedEventArgs_t7DF1155C49DD8AEA9E834484125B15B6EC716286>(static_cast<Il2CppComObject*>(___args1));
	}
	else
	{
		____args1_marshaled = NULL;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____eventHandler_1_t37BDE1AB6C974577508079D7B87815C82DF7A985->Invoke(____sender0_marshaled, ____args1_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___sender0' native representation
	if (____sender0_marshaled != NULL)
	{
		(____sender0_marshaled)->Release();
		____sender0_marshaled = NULL;
	}

}
const Il2CppGuid IEventHandler_1_t73968F2558235E2E8274933705EFBFF5F58D02E5_ComCallableWrapper::IID = { 0xc50898f6, 0xc536, 0x5f47, 0x85, 0x83, 0x8b, 0x2c, 0x24, 0x38, 0xa1, 0x3b };
// Native invoker for Windows.Foundation.EventHandler`1<System.Object>
IL2CPP_EXTERN_C  void EventHandler_1_Invoke_m682141553C11B7BDF8A5AB1F3B1647D8D05B7516_NativeInvoker (Il2CppComObject * __this, RuntimeObject * ___sender0, RuntimeObject * ___args1, const RuntimeMethod* method)
{
	IEventHandler_1_t73968F2558235E2E8274933705EFBFF5F58D02E5_ComCallableWrapper* ____eventHandler_1_t73968F2558235E2E8274933705EFBFF5F58D02E5 = il2cpp_codegen_com_query_interface<IEventHandler_1_t73968F2558235E2E8274933705EFBFF5F58D02E5_ComCallableWrapper>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___sender0' to native representation
	Il2CppIInspectable* ____sender0_marshaled = NULL;
	if (___sender0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___sender0))
		{
			____sender0_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(___sender0));
			(____sender0_marshaled)->AddRef();
		}
		else
		{
			____sender0_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___sender0);
		}
	}
	else
	{
		____sender0_marshaled = NULL;
	}

	// Marshaling of parameter '___args1' to native representation
	Il2CppIInspectable* ____args1_marshaled = NULL;
	if (___args1 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___args1))
		{
			____args1_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(___args1));
			(____args1_marshaled)->AddRef();
		}
		else
		{
			____args1_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___args1);
		}
	}
	else
	{
		____args1_marshaled = NULL;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____eventHandler_1_t73968F2558235E2E8274933705EFBFF5F58D02E5->Invoke(____sender0_marshaled, ____args1_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___sender0' native representation
	if (____sender0_marshaled != NULL)
	{
		(____sender0_marshaled)->Release();
		____sender0_marshaled = NULL;
	}

	// Marshaling cleanup of parameter '___args1' native representation
	if (____args1_marshaled != NULL)
	{
		(____args1_marshaled)->Release();
		____args1_marshaled = NULL;
	}

}
const Il2CppGuid IEventHandler_1_tD47438CFDFBC2791451FC40AA15C772AEE6CDA6F_ComCallableWrapper::IID = { 0x39e1844b, 0x81b6, 0x51b1, 0x91, 0x78, 0x3c, 0x3e, 0x20, 0x58, 0xf2, 0x24 };
// Native invoker for Windows.Foundation.EventHandler`1<Photon.Voice.UWP.MediaExtensions.Packet>
IL2CPP_EXTERN_C  void EventHandler_1_Invoke_mBFB12763E609BD56DECA54B119106D86FFDCBE99_NativeInvoker (Il2CppComObject * __this, RuntimeObject * ___sender0, Packet_t60F5A459127FE6FC040FA9C87ADAF00102F3BEF5 * ___args1, const RuntimeMethod* method)
{
	IEventHandler_1_tD47438CFDFBC2791451FC40AA15C772AEE6CDA6F_ComCallableWrapper* ____eventHandler_1_tD47438CFDFBC2791451FC40AA15C772AEE6CDA6F = il2cpp_codegen_com_query_interface<IEventHandler_1_tD47438CFDFBC2791451FC40AA15C772AEE6CDA6F_ComCallableWrapper>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___sender0' to native representation
	Il2CppIInspectable* ____sender0_marshaled = NULL;
	if (___sender0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___sender0))
		{
			____sender0_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(___sender0));
			(____sender0_marshaled)->AddRef();
		}
		else
		{
			____sender0_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___sender0);
		}
	}
	else
	{
		____sender0_marshaled = NULL;
	}

	// Marshaling of parameter '___args1' to native representation
	__IPacketPublicNonVirtuals_t3C02E8CE0581936284914AA2934844CC3E403AE3* ____args1_marshaled = NULL;
	if (___args1 != NULL)
	{
		____args1_marshaled = il2cpp_codegen_com_query_interface<__IPacketPublicNonVirtuals_t3C02E8CE0581936284914AA2934844CC3E403AE3>(static_cast<Il2CppComObject*>(___args1));
	}
	else
	{
		____args1_marshaled = NULL;
	}

	// Native function invocation
	const il2cpp_hresult_t hr = ____eventHandler_1_tD47438CFDFBC2791451FC40AA15C772AEE6CDA6F->Invoke(____sender0_marshaled, ____args1_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___sender0' native representation
	if (____sender0_marshaled != NULL)
	{
		(____sender0_marshaled)->Release();
		____sender0_marshaled = NULL;
	}

}
const Il2CppGuid IEventHandler_1_t583B58BD02D1F7690D103A4ACCF82E4EDA59729D_ComCallableWrapper::IID = { 0xac4cb24b, 0xbf86, 0x5ab0, 0xbf, 0x9d, 0x55, 0x5e, 0x7d, 0x89, 0x76, 0x4a };
// Native invoker for Windows.Foundation.EventHandler`1<System.String>
IL2CPP_EXTERN_C  void EventHandler_1_Invoke_m907D40273B1256F9B10A654E39784649398B4D5C_NativeInvoker (Il2CppComObject * __this, RuntimeObject * ___sender0, String_t* ___args1, const RuntimeMethod* method)
{
	IEventHandler_1_t583B58BD02D1F7690D103A4ACCF82E4EDA59729D_ComCallableWrapper* ____eventHandler_1_t583B58BD02D1F7690D103A4ACCF82E4EDA59729D = il2cpp_codegen_com_query_interface<IEventHandler_1_t583B58BD02D1F7690D103A4ACCF82E4EDA59729D_ComCallableWrapper>(static_cast<Il2CppComObject*>(__this));

	// Marshaling of parameter '___sender0' to native representation
	Il2CppIInspectable* ____sender0_marshaled = NULL;
	if (___sender0 != NULL)
	{
		if (il2cpp_codegen_is_import_or_windows_runtime(___sender0))
		{
			____sender0_marshaled = il2cpp_codegen_com_query_interface<Il2CppIInspectable>(static_cast<Il2CppComObject*>(___sender0));
			(____sender0_marshaled)->AddRef();
		}
		else
		{
			____sender0_marshaled = il2cpp_codegen_com_get_or_create_ccw<Il2CppIInspectable>(___sender0);
		}
	}
	else
	{
		____sender0_marshaled = NULL;
	}

	// Marshaling of parameter '___args1' to native representation
	Il2CppHString ____args1_marshaled = NULL;
	if (___args1 == NULL)
	{
		IL2CPP_RAISE_MANAGED_EXCEPTION(il2cpp_codegen_get_argument_null_exception("args"), NULL);
	}

	DECLARE_IL2CPP_STRING_AS_STRING_VIEW_OF_NATIVE_CHARS(___args1NativeView, ___args1);
	il2cpp::utils::Il2CppHStringReference ___args1HStringReference(___args1NativeView);
	____args1_marshaled = ___args1HStringReference;

	// Native function invocation
	const il2cpp_hresult_t hr = ____eventHandler_1_t583B58BD02D1F7690D103A4ACCF82E4EDA59729D->Invoke(____sender0_marshaled, ____args1_marshaled);

	il2cpp_codegen_com_raise_exception_if_failed(hr, false);

	// Marshaling cleanup of parameter '___sender0' native representation
	if (____sender0_marshaled != NULL)
	{
		(____sender0_marshaled)->Release();
		____sender0_marshaled = NULL;
	}

}
