

/*
WARNING: THIS FILE IS AUTO-GENERATED. DO NOT MODIFY.

This file was generated from HelloWorld.idl
using RTI Code Generator (rtiddsgen) version 3.1.1.
The rtiddsgen tool is part of the RTI Connext DDS distribution.
For more information, type 'rtiddsgen -help' at a command shell
or consult the Code Generator User's Manual.
*/

#ifndef HelloWorld_1436885514_hpp
#define HelloWorld_1436885514_hpp

#include <iosfwd>

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport __declspec(dllexport)
#endif

#include "dds/domain/DomainParticipant.hpp"
#include "dds/topic/TopicTraits.hpp"
#include "dds/core/SafeEnumeration.hpp"
#include "dds/core/String.hpp"
#include "dds/core/array.hpp"
#include "dds/core/vector.hpp"
#include "dds/core/Optional.hpp"
#include "dds/core/xtypes/DynamicType.hpp"
#include "dds/core/xtypes/StructType.hpp"
#include "dds/core/xtypes/UnionType.hpp"
#include "dds/core/xtypes/EnumType.hpp"
#include "dds/core/xtypes/AliasType.hpp"
#include "rti/core/array.hpp"
#include "rti/core/BoundedSequence.hpp"
#include "rti/util/StreamFlagSaver.hpp"
#include "rti/domain/PluginSupport.hpp"
#include "rti/core/LongDouble.hpp"
#include "dds/core/External.hpp"
#include "rti/core/Pointer.hpp"
#include "rti/topic/TopicTraits.hpp"

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef RTIUSERDllExport
#define RTIUSERDllExport
#endif

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, start exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport __declspec(dllexport)
#endif

class NDDSUSERDllExport HelloWorld {
  public:
    HelloWorld();

    HelloWorld(
        uint32_t index,
        const std::string& message);

    #ifdef RTI_CXX11_RVALUE_REFERENCES
    #ifndef RTI_CXX11_NO_IMPLICIT_MOVE_OPERATIONS
    HelloWorld (HelloWorld&&) = default;
    HelloWorld& operator=(HelloWorld&&) = default;
    HelloWorld& operator=(const HelloWorld&) = default;
    HelloWorld(const HelloWorld&) = default;
    #else
    HelloWorld(HelloWorld&& other_) OMG_NOEXCEPT;  
    HelloWorld& operator=(HelloWorld&&  other_) OMG_NOEXCEPT;
    #endif
    #endif 

    uint32_t& index() OMG_NOEXCEPT {
        return m_index_;
    }

    const uint32_t& index() const OMG_NOEXCEPT {
        return m_index_;
    }

    void index(uint32_t value) {
        m_index_ = value;
    }

    std::string& message() OMG_NOEXCEPT {
        return m_message_;
    }

    const std::string& message() const OMG_NOEXCEPT {
        return m_message_;
    }

    void message(const std::string& value) {
        m_message_ = value;
    }

    void message(std::string&& value) {
        m_message_ = std::move(value);
    }

    bool operator == (const HelloWorld& other_) const;
    bool operator != (const HelloWorld& other_) const;

    void swap(HelloWorld& other_) OMG_NOEXCEPT ;

  private:

    uint32_t m_index_;
    std::string m_message_;

};

inline void swap(HelloWorld& a, HelloWorld& b)  OMG_NOEXCEPT 
{
    a.swap(b);
}

NDDSUSERDllExport std::ostream& operator<<(std::ostream& o, const HelloWorld& sample);

namespace rti {
    namespace flat {
        namespace topic {
        }
    }
}
namespace dds {
    namespace topic {

        template<>
        struct topic_type_name< HelloWorld > {
            NDDSUSERDllExport static std::string value() {
                return "HelloWorld";
            }
        };

        template<>
        struct is_topic_type< HelloWorld > : public ::dds::core::true_type {};

        template<>
        struct topic_type_support< HelloWorld > {
            NDDSUSERDllExport 
            static void register_type(
                ::dds::domain::DomainParticipant& participant,
                const std::string & type_name);

            NDDSUSERDllExport 
            static std::vector<char>& to_cdr_buffer(
                std::vector<char>& buffer, 
                const HelloWorld& sample,
                ::dds::core::policy::DataRepresentationId representation 
                = ::dds::core::policy::DataRepresentation::auto_id());

            NDDSUSERDllExport 
            static void from_cdr_buffer(HelloWorld& sample, const std::vector<char>& buffer);
            NDDSUSERDllExport 
            static void reset_sample(HelloWorld& sample);

            NDDSUSERDllExport 
            static void allocate_sample(HelloWorld& sample, int, int);

            static const ::rti::topic::TypePluginKind::type type_plugin_kind = 
            ::rti::topic::TypePluginKind::STL;
        };

    }
}

namespace rti { 
    namespace topic {
        #ifndef NDDS_STANDALONE_TYPE
        template<>
        struct dynamic_type< HelloWorld > {
            typedef ::dds::core::xtypes::StructType type;
            NDDSUSERDllExport static const ::dds::core::xtypes::StructType& get();
        };
        #endif

        template <>
        struct extensibility< HelloWorld > {
            static const ::dds::core::xtypes::ExtensibilityKind::type kind =
            ::dds::core::xtypes::ExtensibilityKind::EXTENSIBLE;                
        };

    }
}

#if (defined(RTI_WIN32) || defined (RTI_WINCE) || defined(RTI_INTIME)) && defined(NDDS_USER_DLL_EXPORT)
/* If the code is building on Windows, stop exporting symbols.
*/
#undef NDDSUSERDllExport
#define NDDSUSERDllExport
#endif

#endif // HelloWorld_1436885514_hpp

