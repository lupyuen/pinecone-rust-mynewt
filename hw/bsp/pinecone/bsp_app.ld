/*
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache License, Version 2.0 (the
 * "License"); you may not use this file except in compliance
 * with the License.  You may obtain a copy of the License at
 *
 *  http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the License for the
 * specific language governing permissions and limitations
 * under the License.
 */

/* BL602 Linker Script */
/* TODO: Sync with bsp.yml */
MEMORY
{
  /* Use this memory layout when firmware is loaded into cache memory. Based on https://github.com/lupyuen/pinecone-rust/blob/main/memory.x */
  flash (rxai!w) : ORIGIN = 0x22008000, LENGTH = 48K  /* Instruction Cache Memory */
  ram   (wxa!ri) : ORIGIN = 0x22014000, LENGTH = 48K  /* Data Cache Memory        */

  /* TODO: Use this memory layout when firmware is loaded into Flash Memory. Based on https://github.com/lupyuen/bl_iot_sdk/blob/master/components/bl602/bl602/evb/ld/flash_rom.ld
  flash (rxai!w) : ORIGIN = 0x23000000, LENGTH = 4M
  ram   (wxa!ri) : ORIGIN = 0x4200c000, LENGTH = 216K
  */
  /* TODO: Add WiFi RAM at 0x4204 2000, length 0xa000 */
}

/* TODO: Bootloader not in use. Set Image Header Size to 0x20 when Bootloader is in use */
_imghdr_size = 0x0;

/* This linker script is used for images and thus contains an image header */
/* TODO: Uncomment the next line when Bootloader is in use */
/* _imghdr_size = 0x20; */
