// Generated by Apple Swift version 3.1 (swiftlang-802.0.51 clang-802.0.41)
#pragma clang diagnostic push

#if defined(__has_include) && __has_include(<swift/objc-prologue.h>)
# include <swift/objc-prologue.h>
#endif

#pragma clang diagnostic ignored "-Wauto-import"
#include <objc/NSObject.h>
#include <stdint.h>
#include <stddef.h>
#include <stdbool.h>

#if !defined(SWIFT_TYPEDEFS)
# define SWIFT_TYPEDEFS 1
# if defined(__has_include) && __has_include(<uchar.h>)
#  include <uchar.h>
# elif !defined(__cplusplus) || __cplusplus < 201103L
typedef uint_least16_t char16_t;
typedef uint_least32_t char32_t;
# endif
typedef float swift_float2  __attribute__((__ext_vector_type__(2)));
typedef float swift_float3  __attribute__((__ext_vector_type__(3)));
typedef float swift_float4  __attribute__((__ext_vector_type__(4)));
typedef double swift_double2  __attribute__((__ext_vector_type__(2)));
typedef double swift_double3  __attribute__((__ext_vector_type__(3)));
typedef double swift_double4  __attribute__((__ext_vector_type__(4)));
typedef int swift_int2  __attribute__((__ext_vector_type__(2)));
typedef int swift_int3  __attribute__((__ext_vector_type__(3)));
typedef int swift_int4  __attribute__((__ext_vector_type__(4)));
typedef unsigned int swift_uint2  __attribute__((__ext_vector_type__(2)));
typedef unsigned int swift_uint3  __attribute__((__ext_vector_type__(3)));
typedef unsigned int swift_uint4  __attribute__((__ext_vector_type__(4)));
#endif

#if !defined(SWIFT_PASTE)
# define SWIFT_PASTE_HELPER(x, y) x##y
# define SWIFT_PASTE(x, y) SWIFT_PASTE_HELPER(x, y)
#endif
#if !defined(SWIFT_METATYPE)
# define SWIFT_METATYPE(X) Class
#endif
#if !defined(SWIFT_CLASS_PROPERTY)
# if __has_feature(objc_class_property)
#  define SWIFT_CLASS_PROPERTY(...) __VA_ARGS__
# else
#  define SWIFT_CLASS_PROPERTY(...)
# endif
#endif

#if defined(__has_attribute) && __has_attribute(objc_runtime_name)
# define SWIFT_RUNTIME_NAME(X) __attribute__((objc_runtime_name(X)))
#else
# define SWIFT_RUNTIME_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(swift_name)
# define SWIFT_COMPILE_NAME(X) __attribute__((swift_name(X)))
#else
# define SWIFT_COMPILE_NAME(X)
#endif
#if defined(__has_attribute) && __has_attribute(objc_method_family)
# define SWIFT_METHOD_FAMILY(X) __attribute__((objc_method_family(X)))
#else
# define SWIFT_METHOD_FAMILY(X)
#endif
#if defined(__has_attribute) && __has_attribute(noescape)
# define SWIFT_NOESCAPE __attribute__((noescape))
#else
# define SWIFT_NOESCAPE
#endif
#if defined(__has_attribute) && __has_attribute(warn_unused_result)
# define SWIFT_WARN_UNUSED_RESULT __attribute__((warn_unused_result))
#else
# define SWIFT_WARN_UNUSED_RESULT
#endif
#if !defined(SWIFT_CLASS_EXTRA)
# define SWIFT_CLASS_EXTRA
#endif
#if !defined(SWIFT_PROTOCOL_EXTRA)
# define SWIFT_PROTOCOL_EXTRA
#endif
#if !defined(SWIFT_ENUM_EXTRA)
# define SWIFT_ENUM_EXTRA
#endif
#if !defined(SWIFT_CLASS)
# if defined(__has_attribute) && __has_attribute(objc_subclassing_restricted)
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) __attribute__((objc_subclassing_restricted)) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# else
#  define SWIFT_CLASS(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
#  define SWIFT_CLASS_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_CLASS_EXTRA
# endif
#endif

#if !defined(SWIFT_PROTOCOL)
# define SWIFT_PROTOCOL(SWIFT_NAME) SWIFT_RUNTIME_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
# define SWIFT_PROTOCOL_NAMED(SWIFT_NAME) SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_PROTOCOL_EXTRA
#endif

#if !defined(SWIFT_EXTENSION)
# define SWIFT_EXTENSION(M) SWIFT_PASTE(M##_Swift_, __LINE__)
#endif

#if !defined(OBJC_DESIGNATED_INITIALIZER)
# if defined(__has_attribute) && __has_attribute(objc_designated_initializer)
#  define OBJC_DESIGNATED_INITIALIZER __attribute__((objc_designated_initializer))
# else
#  define OBJC_DESIGNATED_INITIALIZER
# endif
#endif
#if !defined(SWIFT_ENUM)
# define SWIFT_ENUM(_type, _name) enum _name : _type _name; enum SWIFT_ENUM_EXTRA _name : _type
# if defined(__has_feature) && __has_feature(generalized_swift_name)
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) enum _name : _type _name SWIFT_COMPILE_NAME(SWIFT_NAME); enum SWIFT_COMPILE_NAME(SWIFT_NAME) SWIFT_ENUM_EXTRA _name : _type
# else
#  define SWIFT_ENUM_NAMED(_type, _name, SWIFT_NAME) SWIFT_ENUM(_type, _name)
# endif
#endif
#if !defined(SWIFT_UNAVAILABLE)
# define SWIFT_UNAVAILABLE __attribute__((unavailable))
#endif
#if !defined(SWIFT_UNAVAILABLE_MSG)
# define SWIFT_UNAVAILABLE_MSG(msg) __attribute__((unavailable(msg)))
#endif
#if !defined(SWIFT_AVAILABILITY)
# define SWIFT_AVAILABILITY(plat, ...) __attribute__((availability(plat, __VA_ARGS__)))
#endif
#if !defined(SWIFT_DEPRECATED)
# define SWIFT_DEPRECATED __attribute__((deprecated))
#endif
#if !defined(SWIFT_DEPRECATED_MSG)
# define SWIFT_DEPRECATED_MSG(...) __attribute__((deprecated(__VA_ARGS__)))
#endif
#if defined(__has_feature) && __has_feature(modules)
@import Foundation;
@import ObjectiveC;
#endif

#pragma clang diagnostic ignored "-Wproperty-attribute-mismatch"
#pragma clang diagnostic ignored "-Wduplicate-method-arg"
@class MustacheBox;

@interface NSFormatter (SWIFT_EXTENSION(Mustache))
/// Formatter adopts the <code>MustacheBoxable</code> protocol so that it can feed
/// Mustache templates.
/// You should not directly call the <code>mustacheBox</code> property.
/// Formatter can be used as a filter:
/// \code
/// let percentFormatter = NumberFormatter()
/// percentFormatter.numberStyle = .percent
///
/// var template = try! Template(string: "{{ percent(x) }}")
/// template.register(percentFormatter, forKey: "percent")
///
/// // Renders "50%"
/// try! template.render(["x": 0.5])
///
/// \endcodeFormatter can also format all variable tags in a Mustache section:
/// \code
/// template = try! Template(string:
///     "{{# percent }}" +
///       "{{#ingredients}}" +
///         "- {{name}} ({{proportion}})\n" +
///       "{{/ingredients}}" +
///     "{{/percent}}")
/// template.register(percentFormatter, forKey: "percent")
///
/// // - bread (50%)
/// // - ham (35%)
/// // - butter (15%)
/// var data = [
///     "ingredients":[
///         ["name": "bread", "proportion": 0.5],
///         ["name": "ham", "proportion": 0.35],
///         ["name": "butter", "proportion": 0.15]]]
/// try! template.render(data)
///
/// \endcodeAs seen in the example above, variable tags buried inside inner sections
/// are escaped as well, so that you can render loop and conditional
/// sections. However, values that can’t be formatted are left untouched.
/// Precisely speaking, “values that can’t be formatted” are the ones that
/// have the <code>string(for:)</code> method return nil, as stated by
/// <a href="https://developer.apple.com/reference/foundation/formatter/1415993-string">NSFormatter documentation</a>.
/// Typically, <code>NumberFormatter</code> only formats numbers, and <code>DateFormatter</code>,
/// dates: you can safely mix various data types in a section controlled by
/// those well-behaved formatters.
@property (nonatomic, readonly, strong) MustacheBox * _Nonnull mustacheBox;
@end


/// Mustache templates don’t eat raw values: they eat values boxed
/// in <code>MustacheBox</code>.
/// Boxing is generally automatic:
/// \code
/// // The render method automatically boxes the dictionary:
/// template.render(["name": "Arthur"])
///
/// \endcode<em>Warning</em>: the fact that <code>MustacheBox</code> is a subclass of NSObject is an
/// implementation detail that is enforced by the Swift language itself. This
/// may change in the future: do not rely on it.
SWIFT_CLASS("_TtC8Mustache11MustacheBox")
@interface MustacheBox : NSObject
/// The boxed value.
@property (nonatomic, readonly) id _Nullable value;
/// The only empty box is <code>Box()</code>.
@property (nonatomic, readonly) BOOL isEmpty;
/// The boolean value of the box.
/// It tells whether the Box should trigger or prevent the rendering of
/// regular <code>{{#section}}...{{/}}</code> and inverted <code>{{^section}}...{{/}}</code>.
@property (nonatomic, readonly) BOOL boolValue;
/// If the boxed value can be iterated (array or set), returns an array
/// of <code>MustacheBox</code>.
@property (nonatomic, readonly, copy) NSArray<MustacheBox *> * _Nullable arrayValue;
/// If the boxed value is a dictionary, returns a <code>[String: MustacheBox]</code>.
@property (nonatomic, readonly, copy) NSDictionary<NSString *, MustacheBox *> * _Nullable dictionaryValue;
/// Extracts a key out of a box.
/// \code
/// let box = Box(["firstName": "Arthur"])
/// box.mustacheBox(forKey: "firstName").value  // "Arthur"
///
/// \endcode\param key A key.
///
///
/// returns:
/// The MustacheBox for <em>key</em>.
- (MustacheBox * _Nonnull)mustacheBoxForKey:(NSString * _Nonnull)key SWIFT_WARN_UNUSED_RESULT;
- (nonnull instancetype)init SWIFT_UNAVAILABLE;
@end


@interface MustacheBox (SWIFT_EXTENSION(Mustache))
@end


@interface MustacheBox (SWIFT_EXTENSION(Mustache))
/// <code>MustacheBox</code> adopts the <code>MustacheBoxable</code> protocol so that it can feed
/// Mustache templates. Its mustacheBox property returns itself.
@property (nonatomic, readonly, strong) MustacheBox * _Nonnull mustacheBox;
@end


@interface MustacheBox (SWIFT_EXTENSION(Mustache))
/// A textual representation of <code>self</code>.
@property (nonatomic, readonly, copy) NSString * _Nonnull description;
@end


@interface MustacheBox (SWIFT_EXTENSION(Mustache))
@end


@interface MustacheBox (SWIFT_EXTENSION(Mustache))
/// A textual representation of the boxed value. Useful for debugging.
@property (nonatomic, readonly, copy) NSString * _Nonnull valueDescription;
@end


@interface NSDictionary (SWIFT_EXTENSION(Mustache))
/// <code>NSDictionary</code> adopts the <code>MustacheBoxable</code> protocol so that it can feed
/// Mustache templates.
/// \code
/// // Renders "Freddy Mercury"
/// let dictionary: NSDictionary = [
///     "firstName": "Freddy",
///     "lastName": "Mercury"]
/// let template = try! Template(string: "{{firstName}} {{lastName}}")
/// let rendering = try! template.render(Box(dictionary))
///
/// \endcodeYou should not directly call the <code>mustacheBox</code> property.
/// <h3>Rendering</h3>
/// <ul>
///   <li>
///     <code>{{dictionary}}</code> renders the result of the <code>description</code> method,
///     HTML-escaped.
///   </li>
///   <li>
///     <code>{{{dictionary}}}</code> renders the result of the <code>description</code> method,
///     <em>not</em> HTML-escaped.
///   </li>
///   <li>
///     <code>{{#dictionary}}...{{/dictionary}}</code> renders once, pushing <code>dictionary</code>
///     on the top of the context stack.
///   </li>
///   <li>
///     <code>{{^dictionary}}...{{/dictionary}}</code> does not render.
///   </li>
/// </ul>
/// In order to iterate over the key/value pairs of a dictionary, use the
/// <code>each</code> filter from the Standard Library:
/// \code
/// // Attach StandardLibrary.each to the key "each":
/// let template = try! Template(string: "<{{# each(dictionary) }}{{@key}}:{{.}}, {{/}}>")
/// template.register(StandardLibrary.each, forKey: "each")
///
/// // Renders "<name:Arthur, age:36, >"
/// let dictionary = ["name": "Arthur", "age": 36] as NSDictionary
/// let rendering = try! template.render(["dictionary": dictionary])
///
/// \endcode
@property (nonatomic, readonly, strong) MustacheBox * _Nonnull mustacheBox;
@end


@interface NSNull (SWIFT_EXTENSION(Mustache))
/// <code>NSNull</code> adopts the <code>MustacheBoxable</code> protocol so that it can feed
/// Mustache templates.
/// You should not directly call the <code>mustacheBox</code> property. Always use the
/// <code>Box()</code> function instead:
/// \code
/// NSNull().mustacheBox   // Valid, but discouraged
/// Box(NSNull())          // Preferred
///
/// \endcode<h3>Rendering</h3>
/// <ul>
///   <li>
///     <code>{{null}}</code> does not render.
///   </li>
///   <li>
///     <code>{{#null}}...{{/null}}</code> does not render (NSNull is falsey).
///   </li>
///   <li>
///     <code>{{^null}}...{{/null}}</code> does render (NSNull is falsey).
///   </li>
/// </ul>
@property (nonatomic, readonly, strong) MustacheBox * _Nonnull mustacheBox;
@end


@interface NSNumber (SWIFT_EXTENSION(Mustache))
/// <code>NSNumber</code> adopts the <code>MustacheBoxable</code> protocol so that it can feed
/// Mustache templates.
/// You should not directly call the <code>mustacheBox</code> property.
/// <h3>Rendering</h3>
/// NSNumber renders exactly like Swift numbers: depending on its internal
/// objCType, an NSNumber is rendered as a Swift Bool, Int, UInt, Int64,
/// UInt64, or Double.
/// <ul>
///   <li>
///     <code>{{number}}</code> is rendered with built-in Swift String Interpolation.
///     Custom formatting can be explicitly required with NumberFormatter,
///     as in <code>{{format(a)}}</code> (see <code>Formatter</code>).
///   </li>
///   <li>
///     <code>{{#number}}...{{/number}}</code> renders if and only if <code>number</code> is
///     not 0 (zero).
///   </li>
///   <li>
///     <code>{{^number}}...{{/number}}</code> renders if and only if <code>number</code> is 0 (zero).
///   </li>
/// </ul>
@property (nonatomic, readonly, strong) MustacheBox * _Nonnull mustacheBox;
@end


@interface NSObject (SWIFT_EXTENSION(Mustache))
/// <code>NSObject</code> adopts the <code>MustacheBoxable</code> protocol so that it can feed
/// Mustache templates.
/// You should not directly call the <code>mustacheBox</code> property.
/// NSObject’s default implementation handles two general cases:
/// <ul>
///   <li>
///     Enumerable objects that conform to the <code>NSFastEnumeration</code> protocol,
///     such as <code>NSArray</code> and <code>NSOrderedSet</code>.
///   </li>
///   <li>
///     All other objects
///   </li>
/// </ul>
/// GRMustache ships with a few specific classes that escape the general
/// cases and provide their own rendering behavior: <code>NSDictionary</code>,
/// <code>NSFormatter</code>, <code>NSNull</code>, <code>NSNumber</code>, <code>NSString</code>, and <code>NSSet</code> (see the
/// documentation for those classes).
/// Your own subclasses of NSObject can also override the <code>mustacheBox</code>
/// method and provide their own custom behavior.
/// <h2>Arrays</h2>
/// An object is treated as an array if it conforms to <code>NSFastEnumeration</code>.
/// This is the case of <code>NSArray</code> and <code>NSOrderedSet</code>, for example.
/// <code>NSDictionary</code> and <code>NSSet</code> have their own custom Mustache rendering: see
/// their documentation for more information.
/// <h3>Rendering</h3>
/// <ul>
///   <li>
///     <code>{{array}}</code> renders the concatenation of the renderings of the
///     array items.
///   </li>
///   <li>
///     <code>{{#array}}...{{/array}}</code> renders as many times as there are items in
///     <code>array</code>, pushing each item on its turn on the top of the
///     context stack.
///   </li>
///   <li>
///     <code>{{^array}}...{{/array}}</code> renders if and only if <code>array</code> is empty.
///   </li>
/// </ul>
/// <h3>Keys exposed to templates</h3>
/// An array can be queried for the following keys:
/// <ul>
///   <li>
///     <code>count</code>: number of elements in the array
///   </li>
///   <li>
///     <code>first</code>: the first object in the array
///   </li>
///   <li>
///     <code>last</code>: the last object in the array
///   </li>
/// </ul>
/// Because 0 (zero) is falsey, <code>{{#array.count}}...{{/array.count}}</code>
/// renders once, if and only if <code>array</code> is not empty.
/// <h2>Other objects</h2>
/// Other objects fall in the general case.
/// Their keys are extracted with the <code>valueForKey:</code> method, as long as the
/// key is a property name, a custom property getter, or the name of a
/// <code>NSManagedObject</code> attribute.
/// <h3>Rendering</h3>
/// <ul>
///   <li>
///     <code>{{object}}</code> renders the result of the <code>description</code> method,
///     HTML-escaped.
///   </li>
///   <li>
///     <code>{{{object}}}</code> renders the result of the <code>description</code> method, <em>not</em>
///     HTML-escaped.
///   </li>
///   <li>
///     <code>{{#object}}...{{/object}}</code> renders once, pushing <code>object</code> on the top
///     of the context stack.
///   </li>
///   <li>
///     <code>{{^object}}...{{/object}}</code> does not render.
///   </li>
/// </ul>
@property (nonatomic, readonly, strong) MustacheBox * _Nonnull mustacheBox;
@end


@interface NSSet (SWIFT_EXTENSION(Mustache))
/// <code>NSSet</code> adopts the <code>MustacheBoxable</code> protocol so that it can feed
/// Mustache templates.
/// \code
/// let set: NSSet = [1,2,3]
///
/// // Renders "213"
/// let template = try! Template(string: "{{#set}}{{.}}{{/set}}")
/// try! template.render(Box(["set": Box(set)]))
///
/// \endcodeYou should not directly call the <code>mustacheBox</code> property.
/// <h3>Rendering</h3>
/// <ul>
///   <li>
///     <code>{{set}}</code> renders the concatenation of the renderings of the set
///     items, in any order.
///   </li>
///   <li>
///     <code>{{#set}}...{{/set}}</code> renders as many times as there are items in
///     <code>set</code>, pushing each item on its turn on the top of the context stack.
///   </li>
///   <li>
///     <code>{{^set}}...{{/set}}</code> renders if and only if <code>set</code> is empty.
///   </li>
/// </ul>
/// <h3>Keys exposed to templates</h3>
/// A set can be queried for the following keys:
/// <ul>
///   <li>
///     <code>count</code>: number of elements in the set
///   </li>
///   <li>
///     <code>first</code>: the first object in the set
///   </li>
/// </ul>
/// Because 0 (zero) is falsey, <code>{{#set.count}}...{{/set.count}}</code> renders
/// once, if and only if <code>set</code> is not empty.
@property (nonatomic, readonly, strong) MustacheBox * _Nonnull mustacheBox;
@end


@interface NSString (SWIFT_EXTENSION(Mustache))
/// <code>NSString</code> adopts the <code>MustacheBoxable</code> protocol so that it can feed
/// Mustache templates.
/// You should not directly call the <code>mustacheBox</code> property.
/// <h3>Rendering</h3>
/// <ul>
///   <li>
///     <code>{{string}}</code> renders the string, HTML-escaped.
///   </li>
///   <li>
///     <code>{{{string}}}</code> renders the string, <em>not</em> HTML-escaped.
///   </li>
///   <li>
///     <code>{{#string}}...{{/string}}</code> renders if and only if <code>string</code> is
///     not empty.
///   </li>
///   <li>
///     <code>{{^string}}...{{/string}}</code> renders if and only if <code>string</code> is empty.
///   </li>
/// </ul>
/// HTML-escaping of <code>{{string}}</code> tags is disabled for Text templates: see
/// <code>Configuration.contentType</code> for a full discussion of the content type of
/// templates.
/// <h3>Keys exposed to templates</h3>
/// A string can be queried for the following keys:
/// <ul>
///   <li>
///     <code>length</code>: the number of characters in the string (using Swift method).
///   </li>
/// </ul>
@property (nonatomic, readonly, strong) MustacheBox * _Nonnull mustacheBox;
@end

#pragma clang diagnostic pop
