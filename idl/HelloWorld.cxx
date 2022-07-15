

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HelloWorld.idl
using RTI Code Generator (rtiddsgen) version 3.1.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#include <iosfwd>
#include <iomanip>

#include "rti/topic/cdr/Serialization.hpp"

#include "HelloWorld.hpp"
#include "HelloWorldPlugin.hpp"

#include <rti/util/ostream_operators.hpp>

// ---- HelloWorld: 

HelloWorld::HelloWorld() :
    m_index_ (0u) ,
    m_message_ ("")  {
}   

HelloWorld::HelloWorld (
    uint32_t index,
    const std::string& message)
    :
        m_index_( index ),
        m_message_( message ) {
}

#ifdef RTI_CXX11_RVALUE_REFERENCES
#ifdef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
HelloWorld::HelloWorld(HelloWorld&& other_) OMG_NOEXCEPT  :m_index_ (std::move(other_.m_index_))
,
m_message_ (std::move(other_.m_message_))
{
} 

HelloWorld& HelloWorld::operator=(HelloWorld&&  other_) OMG_NOEXCEPT {
    HelloWorld tmp(std::move(other_));
    swap(tmp); 
    return *this;
}
#endif
#endif   

void HelloWorld::swap(HelloWorld& other_)  OMG_NOEXCEPT 
{
    using std::swap;
    swap(m_index_, other_.m_index_);
    swap(m_message_, other_.m_message_);
}  

bool HelloWorld::operator == (const HelloWorld& other_) const {
    if (m_index_ != other_.m_index_) {
        return false;
    }
    if (m_message_ != other_.m_message_) {
        return false;
    }
    return true;
}
bool HelloWorld::operator != (const HelloWorld& other_) const {
    return !this->operator ==(other_);
}

std::ostream& operator << (std::ostream& o,const HelloWorld& sample)
{
    ::rti::util::StreamFlagSaver flag_saver (o);
    o <<"[";
    o << "index: " << sample.index()<<", ";
    o << "message: " << sample.message() ;
    o <<"]";
    return o;
}

// --- Type traits: -------------------------------------------------

namespace rti { 
    namespace topic {

        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct native_type_code< HelloWorld > {
            static DDS_TypeCode * get()
            {
                using namespace ::rti::topic::interpreter;

                static RTIBool is_initialized = RTI_FALSE;

                static DDS_TypeCode HelloWorld_g_tc_message_string;

                static DDS_TypeCode_Member HelloWorld_g_tc_members[2]=
                {

                    {
                        (char *)"index",/* Member name */
                        {
                            0,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }, 
                    {
                        (char *)"message",/* Member name */
                        {
                            1,/* Representation ID */
                            DDS_BOOLEAN_FALSE,/* Is a pointer? */
                            -1, /* Bitfield bits */
                            NULL/* Member type code is assigned later */
                        },
                        0, /* Ignored */
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        RTI_CDR_REQUIRED_MEMBER, /* Is a key? */
                        DDS_PUBLIC_MEMBER,/* Member visibility */
                        1,
                        NULL, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER
                    }
                };

                static DDS_TypeCode HelloWorld_g_tc =
                {{
                        DDS_TK_STRUCT, /* Kind */
                        DDS_BOOLEAN_FALSE, /* Ignored */
                        -1, /*Ignored*/
                        (char *)"HelloWorld", /* Name */
                        NULL, /* Ignored */      
                        0, /* Ignored */
                        0, /* Ignored */
                        NULL, /* Ignored */
                        2, /* Number of members */
                        HelloWorld_g_tc_members, /* Members */
                        DDS_VM_NONE, /* Ignored */
                        RTICdrTypeCodeAnnotations_INITIALIZER,
                        DDS_BOOLEAN_TRUE, /* _isCopyable */
                        NULL, /* _sampleAccessInfo: assigned later */
                        NULL /* _typePlugin: assigned later */
                    }}; /* Type code for HelloWorld*/

                if (is_initialized) {
                    return &HelloWorld_g_tc;
                }

                HelloWorld_g_tc_message_string = initialize_string_typecode((255L));

                HelloWorld_g_tc._data._annotations._allowedDataRepresentationMask = 5;

                HelloWorld_g_tc_members[0]._representation._typeCode = (RTICdrTypeCode *)&DDS_g_tc_ulong;
                HelloWorld_g_tc_members[1]._representation._typeCode = (RTICdrTypeCode *)&HelloWorld_g_tc_message_string;

                /* Initialize the values for member annotations. */
                HelloWorld_g_tc_members[0]._annotations._defaultValue._d = RTI_XCDR_TK_ULONG;
                HelloWorld_g_tc_members[0]._annotations._defaultValue._u.ulong_value = 0u;
                HelloWorld_g_tc_members[0]._annotations._minValue._d = RTI_XCDR_TK_ULONG;
                HelloWorld_g_tc_members[0]._annotations._minValue._u.ulong_value = RTIXCdrUnsignedLong_MIN;
                HelloWorld_g_tc_members[0]._annotations._maxValue._d = RTI_XCDR_TK_ULONG;
                HelloWorld_g_tc_members[0]._annotations._maxValue._u.ulong_value = RTIXCdrUnsignedLong_MAX;

                HelloWorld_g_tc_members[1]._annotations._defaultValue._d = RTI_XCDR_TK_STRING;
                HelloWorld_g_tc_members[1]._annotations._defaultValue._u.string_value = (DDS_Char *) "";

                HelloWorld_g_tc._data._sampleAccessInfo = sample_access_info();
                HelloWorld_g_tc._data._typePlugin = type_plugin_info();    

                is_initialized = RTI_TRUE;

                return &HelloWorld_g_tc;
            }

            static RTIXCdrSampleAccessInfo * sample_access_info()
            {
                static RTIBool is_initialized = RTI_FALSE;

                HelloWorld *sample;

                static RTIXCdrMemberAccessInfo HelloWorld_g_memberAccessInfos[2] =
                {RTIXCdrMemberAccessInfo_INITIALIZER};

                static RTIXCdrSampleAccessInfo HelloWorld_g_sampleAccessInfo = 
                RTIXCdrSampleAccessInfo_INITIALIZER;

                if (is_initialized) {
                    return (RTIXCdrSampleAccessInfo*) &HelloWorld_g_sampleAccessInfo;
                }

                RTIXCdrHeap_allocateStruct(
                    &sample, 
                    HelloWorld);
                if (sample == NULL) {
                    return NULL;
                }

                HelloWorld_g_memberAccessInfos[0].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->index() - (char *)sample);

                HelloWorld_g_memberAccessInfos[1].bindingMemberValueOffset[0] = 
                (RTIXCdrUnsignedLong) ((char *)&sample->message() - (char *)sample);

                HelloWorld_g_sampleAccessInfo.memberAccessInfos = 
                HelloWorld_g_memberAccessInfos;

                {
                    size_t candidateTypeSize = sizeof(HelloWorld);

                    if (candidateTypeSize > RTIXCdrLong_MAX) {
                        HelloWorld_g_sampleAccessInfo.typeSize[0] =
                        RTIXCdrLong_MAX;
                    } else {
                        HelloWorld_g_sampleAccessInfo.typeSize[0] =
                        (RTIXCdrUnsignedLong) candidateTypeSize;
                    }
                }

                HelloWorld_g_sampleAccessInfo.useGetMemberValueOnlyWithRef =
                RTI_XCDR_TRUE;

                HelloWorld_g_sampleAccessInfo.getMemberValuePointerFcn = 
                interpreter::get_aggregation_value_pointer< HelloWorld >;

                HelloWorld_g_sampleAccessInfo.languageBinding = 
                RTI_XCDR_TYPE_BINDING_CPP_11_STL ;

                RTIXCdrHeap_freeStruct(sample);
                is_initialized = RTI_TRUE;
                return (RTIXCdrSampleAccessInfo*) &HelloWorld_g_sampleAccessInfo;
            }

            static RTIXCdrTypePlugin * type_plugin_info()
            {
                static RTIXCdrTypePlugin HelloWorld_g_typePlugin = 
                {
                    NULL, /* serialize */
                    NULL, /* serialize_key */
                    NULL, /* deserialize_sample */
                    NULL, /* deserialize_key_sample */
                    NULL, /* skip */
                    NULL, /* get_serialized_sample_size */
                    NULL, /* get_serialized_sample_max_size_ex */
                    NULL, /* get_serialized_key_max_size_ex */
                    NULL, /* get_serialized_sample_min_size */
                    NULL, /* serialized_sample_to_key */
                    NULL,
                    NULL,
                    NULL,
                    NULL
                };

                return &HelloWorld_g_typePlugin;
            }
        }; // native_type_code
        #endif

        const ::dds::core::xtypes::StructType& dynamic_type< HelloWorld >::get()
        {
            return static_cast<const ::dds::core::xtypes::StructType&>(
                ::rti::core::native_conversions::cast_from_native< ::dds::core::xtypes::DynamicType >(
                    *(native_type_code< HelloWorld >::get())));
        }

    }
}

namespace dds { 
    namespace topic {
        void topic_type_support< HelloWorld >:: register_type(
            ::dds::domain::DomainParticipant& participant,
            const std::string& type_name) 
        {

            ::rti::domain::register_type_plugin(
                participant,
                type_name,
                HelloWorldPlugin_new,
                HelloWorldPlugin_delete);
        }

        std::vector<char>& topic_type_support< HelloWorld >::to_cdr_buffer(
            std::vector<char>& buffer, 
            const HelloWorld& sample,
            ::dds::core::policy::DataRepresentationId representation)
        {
            // First get the length of the buffer
            unsigned int length = 0;
            RTIBool ok = HelloWorldPlugin_serialize_to_cdr_buffer(
                NULL, 
                &length,
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to calculate cdr buffer size");

            // Create a vector with that size and copy the cdr buffer into it
            buffer.resize(length);
            ok = HelloWorldPlugin_serialize_to_cdr_buffer(
                &buffer[0], 
                &length, 
                &sample,
                representation);
            ::rti::core::check_return_code(
                ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
                "Failed to copy cdr buffer");

            return buffer;
        }

        void topic_type_support< HelloWorld >::from_cdr_buffer(HelloWorld& sample, 
        const std::vector<char>& buffer)
        {

            RTIBool ok  = HelloWorldPlugin_deserialize_from_cdr_buffer(
                &sample, 
                &buffer[0], 
                static_cast<unsigned int>(buffer.size()));
            ::rti::core::check_return_code(ok ? DDS_RETCODE_OK : DDS_RETCODE_ERROR,
            "Failed to create HelloWorld from cdr buffer");
        }

        void topic_type_support< HelloWorld >::reset_sample(HelloWorld& sample) 
        {
            sample.index(0u);
            sample.message("");
        }

        void topic_type_support< HelloWorld >::allocate_sample(HelloWorld& sample, int, int) 
        {
            ::rti::topic::allocate_sample(sample.message(),  -1, 255L);
        }

    }
}  

