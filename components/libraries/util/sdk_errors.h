
#ifndef SDK_ERRORS_H__
#define SDK_ERRORS_H__

#include <stdint.h>
#include "nrf_error.h"

#ifdef __cplusplus
extern "C" {
#endif

/**
 * @defgroup sdk_err_base Base defined for SDK Modules
 * @{
 */
#define NRF_ERROR_SDK_ERROR_BASE         (NRF_ERROR_BASE_NUM + 0x8000)   /**< Base value defined for SDK module identifiers. */
#define NRF_ERROR_SDK_COMMON_ERROR_BASE  (NRF_ERROR_BASE_NUM + 0x0080)   /**< Base error value to be used for SDK error values. */
/** @} */

/**
 * @defgroup sdk_module_codes Codes reserved as identification for module where the error occurred.
 * @{
 */
#define NRF_ERROR_MEMORY_MANAGER_ERR_BASE   (0x8100)    /**< Base address for Memory Manager related errors. */
#define NRF_ERROR_PERIPH_DRIVERS_ERR_BASE   (0x8200)    /**< Base address for Peripheral drivers related errors. */
#define NRF_ERROR_GAZELLE_ERR_BASE          (0x8300)    /**< Base address for Gazelle related errors. */
#define NRF_ERROR_BLE_IPSP_ERR_BASE         (0x8400)    /**< Base address for BLE IPSP related errors. */
#define NRF_ERROR_CRYPTO_ERR_BASE           (0x8500)    /**< Base address for crypto related errors. */
#define NRF_ERROR_FDS_ERR_BASE              (0x8600)    /**< Base address for FDS related errors. */
/** @} */


/**
 * @defgroup sdk_iot_errors Codes reserved as identification for IoT errors.
 * @{
 */
#define NRF_ERROR_IOT_ERR_BASE_START        (0xA000)
#define NRF_ERROR_IOT_ERR_BASE_STOP         (0xAFFF)
/** @} */


/**
 * @defgroup sdk_common_errors Codes reserved as identification for common errors.
 * @{
 */
#define NRF_ERROR_MODULE_NOT_INITIALIZED     (NRF_ERROR_SDK_COMMON_ERROR_BASE + 0x0000) ///< Module not initialized
#define NRF_ERROR_MUTEX_INIT_FAILED          (NRF_ERROR_SDK_COMMON_ERROR_BASE + 0x0001) ///< Mutex initialization failed
#define NRF_ERROR_MUTEX_LOCK_FAILED          (NRF_ERROR_SDK_COMMON_ERROR_BASE + 0x0002) ///< Mutex lock failed
#define NRF_ERROR_MUTEX_UNLOCK_FAILED        (NRF_ERROR_SDK_COMMON_ERROR_BASE + 0x0003) ///< Mutex unlock failed
#define NRF_ERROR_MUTEX_COND_INIT_FAILED     (NRF_ERROR_SDK_COMMON_ERROR_BASE + 0x0004) ///< Mutex conditional initialization failed
#define NRF_ERROR_MODULE_ALREADY_INITIALIZED (NRF_ERROR_SDK_COMMON_ERROR_BASE + 0x0005) ///< Module already initialized
#define NRF_ERROR_STORAGE_FULL               (NRF_ERROR_SDK_COMMON_ERROR_BASE + 0x0006) ///< Storage full
#define NRF_ERROR_API_NOT_IMPLEMENTED        (NRF_ERROR_SDK_COMMON_ERROR_BASE + 0x0010) ///< API not implemented
#define NRF_ERROR_FEATURE_NOT_ENABLED        (NRF_ERROR_SDK_COMMON_ERROR_BASE + 0x0011) ///< Feature not enabled
#define NRF_ERROR_IO_PENDING                 (NRF_ERROR_SDK_COMMON_ERROR_BASE + 0x0012) ///< Input/Output pending
/** @} */


/**
 * @defgroup drv_specific_errors Error / status codes specific to drivers.
 * @{
 */
#define NRF_ERROR_DRV_TWI_ERR_OVERRUN        (NRF_ERROR_PERIPH_DRIVERS_ERR_BASE + 0x0000)
#define NRF_ERROR_DRV_TWI_ERR_ANACK          (NRF_ERROR_PERIPH_DRIVERS_ERR_BASE + 0x0001)
#define NRF_ERROR_DRV_TWI_ERR_DNACK          (NRF_ERROR_PERIPH_DRIVERS_ERR_BASE + 0x0002)
/** @} */


/**
 * @defgroup ble_ipsp_errors IPSP codes
 * @brief Error and status codes specific to IPSP.
 * @{
 */
#define NRF_ERROR_BLE_IPSP_RX_PKT_TRUNCATED       (NRF_ERROR_BLE_IPSP_ERR_BASE + 0x0000)
#define NRF_ERROR_BLE_IPSP_CHANNEL_ALREADY_EXISTS (NRF_ERROR_BLE_IPSP_ERR_BASE + 0x0001)
#define NRF_ERROR_BLE_IPSP_LINK_DISCONNECTED      (NRF_ERROR_BLE_IPSP_ERR_BASE + 0x0002)
#define NRF_ERROR_BLE_IPSP_PEER_REJECTED          (NRF_ERROR_BLE_IPSP_ERR_BASE + 0x0003)
/* @} */


/**
 * @brief API Result.
 *
 * @details Indicates success or failure of an API procedure. In case of failure, a comprehensive
 *          error code indicating cause or reason for failure is provided.
 *
 *          Though called an API result, it could used in Asynchronous notifications callback along
 *          with asynchronous callback as event result. This mechanism is employed when an event
 *          marks the end of procedure initiated using API. API result, in this case, will only be
 *          an indicative of whether the procedure has been requested successfully.
 */
typedef uint32_t ret_code_t;

/** @} */
/** @} */

#ifdef __cplusplus
}
#endif

#endif // SDK_ERRORS_H__
