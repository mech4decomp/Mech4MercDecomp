/*
 * FUN_007611a0 (422 B in CSV; actual 441 B) — Allocates and fills a
 * 0x164-byte object via a vtable allocator (EBX+0x18), zeroes it,
 * copies an optional name string, and stores the allocator handle.
 *
 * __cdecl, RET (2 stack params). Heavily obfuscated with EB 04 +
 * D6 D6 3C 00 junk-byte jump chains crossed with EB 00 no-op sleds.
 * The junk bytes are emitted raw (__emit); the jumps are real mnemonics.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00763db0(void *param);

__declspec(naked) void FUN_007611a0(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 0xc]
        push    ebx
        push    esi
        push    edi
        push    eax
        call    FUN_00763db0
        mov     ebx, eax
        add     esp, 4
        test    ebx, ebx
        jnz     L_bd
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
L_bd:
        jmp     L_c3
        __emit 0xD6   /* junk byte (obfuscation) */
        __emit 0xD6   /* junk byte (obfuscation) */
        __emit 0x3C   /* junk byte (obfuscation) */
        __emit 0x00   /* junk byte (obfuscation) */
L_c3:   jmp     L_c5
L_c5:   jmp     L_c7
L_c7:   jmp     L_c9
L_c9:   jmp     L_cb
L_cb:   jmp     L_cd
L_cd:   jmp     L_cf
L_cf:   jmp     L_d1
L_d1:   jmp     L_d3
L_d3:   jmp     L_d5
L_d5:   jmp     L_d7
L_d7:   jmp     L_d9
L_d9:   jmp     L_db
L_db:   jmp     L_dd
L_dd:   jmp     L_df
L_df:   jmp     L_e1
L_e1:   jmp     L_e3
L_e3:   jmp     L_e5
L_e5:   jmp     L_e7
L_e7:   jmp     L_e9
L_e9:   jmp     L_eb
L_eb:   jmp     L_ed
L_ed:   jmp     L_ef
L_ef:   jmp     L_f1
L_f1:   jmp     L_f3
L_f3:   jmp     L_f5
L_f5:   jmp     L_f7
L_f7:   jmp     L_f9
L_f9:
        mov     esi, dword ptr [ebp + 8]
        test    esi, esi
        jz      L_219
        mov     edi, esi
        or      ecx, -1
        xor     eax, eax
        repne   scasb
        not     ecx
        dec     ecx
        cmp     ecx, 0x100
        jbe     L_219
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
L_219:
        jmp     L_21f
        __emit 0xD6   /* junk byte (obfuscation) */
        __emit 0xD6   /* junk byte (obfuscation) */
        __emit 0x3C   /* junk byte (obfuscation) */
        __emit 0x00   /* junk byte (obfuscation) */
L_21f:  jmp     L_221
L_221:  jmp     L_223
L_223:  jmp     L_225
L_225:  jmp     L_227
L_227:  jmp     L_229
L_229:  jmp     L_22b
L_22b:  jmp     L_22d
L_22d:  jmp     L_22f
L_22f:  jmp     L_231
L_231:  jmp     L_233
L_233:  jmp     L_235
L_235:  jmp     L_237
L_237:  jmp     L_239
L_239:  jmp     L_23b
L_23b:  jmp     L_23d
L_23d:  jmp     L_23f
L_23f:  jmp     L_241
L_241:  jmp     L_243
L_243:  jmp     L_245
L_245:  jmp     L_247
L_247:  jmp     L_249
L_249:  jmp     L_24b
L_24b:  jmp     L_24d
L_24d:  jmp     L_24f
L_24f:  jmp     L_251
L_251:  jmp     L_253
L_253:  jmp     L_255
L_255:
        push    1
        push    0x164
        call    dword ptr [ebx + 0x18]
        add     esp, 8
        mov     edx, eax
        jmp     L_26a
        __emit 0xD6   /* junk byte (obfuscation) */
        __emit 0xD6   /* junk byte (obfuscation) */
        __emit 0x3C   /* junk byte (obfuscation) */
        __emit 0x00   /* junk byte (obfuscation) */
L_26a:  jmp     L_26c
L_26c:  jmp     L_26e
L_26e:  jmp     L_270
L_270:  jmp     L_272
L_272:  jmp     L_274
L_274:  jmp     L_276
L_276:  jmp     L_278
L_278:  jmp     L_27a
L_27a:  jmp     L_27c
L_27c:  jmp     L_27e
L_27e:  jmp     L_280
L_280:  jmp     L_282
L_282:  jmp     L_284
L_284:  jmp     L_286
L_286:  jmp     L_288
L_288:  jmp     L_28a
L_28a:  jmp     L_28c
L_28c:  jmp     L_28e
L_28e:  jmp     L_290
L_290:  jmp     L_292
L_292:  jmp     L_294
L_294:  jmp     L_296
L_296:  jmp     L_298
L_298:  jmp     L_29a
L_29a:  jmp     L_29c
L_29c:  jmp     L_29e
L_29e:  jmp     L_2a0
L_2a0:
        test    edx, edx
        jnz     L_2a9
        pop     edi
        pop     esi
        pop     ebx
        pop     ebp
        ret
L_2a9:
        mov     ecx, 0x59
        xor     eax, eax
        mov     edi, edx
        rep     stosd
        jmp     L_2ba
        __emit 0xD6   /* junk byte (obfuscation) */
        __emit 0xD6   /* junk byte (obfuscation) */
        __emit 0x3C   /* junk byte (obfuscation) */
        __emit 0x00   /* junk byte (obfuscation) */
L_2ba:  jmp     L_2bc
L_2bc:  jmp     L_2be
L_2be:  jmp     L_2c0
L_2c0:  jmp     L_2c2
L_2c2:  jmp     L_2c4
L_2c4:  jmp     L_2c6
L_2c6:  jmp     L_2c8
L_2c8:  jmp     L_2ca
L_2ca:  jmp     L_2cc
L_2cc:  jmp     L_2ce
L_2ce:  jmp     L_2d0
L_2d0:  jmp     L_2d2
L_2d2:  jmp     L_2d4
L_2d4:  jmp     L_2d6
L_2d6:  jmp     L_2d8
L_2d8:  jmp     L_2da
L_2da:  jmp     L_2dc
L_2dc:  jmp     L_2de
L_2de:  jmp     L_2e0
L_2e0:  jmp     L_2e2
L_2e2:  jmp     L_2e4
L_2e4:  jmp     L_2e6
L_2e6:  jmp     L_2e8
L_2e8:  jmp     L_2ea
L_2ea:  jmp     L_2ec
L_2ec:  jmp     L_2ee
L_2ee:  jmp     L_2f0
L_2f0:
        test    esi, esi
        jz      L_311
        mov     edi, esi
        or      ecx, -1
        repne   scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        mov     esi, edi
        mov     edi, edx
        shr     ecx, 2
        rep     movsd
        mov     ecx, eax
        and     ecx, 3
        rep     movsb
L_311:
        mov     dword ptr [edx + 0x100], ebx
        jmp     L_31d
        __emit 0xD6   /* junk byte (obfuscation) */
        __emit 0xD6   /* junk byte (obfuscation) */
        __emit 0x3C   /* junk byte (obfuscation) */
        __emit 0x00   /* junk byte (obfuscation) */
L_31d:  jmp     L_31f
L_31f:  jmp     L_321
L_321:  jmp     L_323
L_323:  jmp     L_325
L_325:  jmp     L_327
L_327:  jmp     L_329
L_329:  jmp     L_32b
L_32b:  jmp     L_32d
L_32d:  jmp     L_32f
L_32f:  jmp     L_331
L_331:  jmp     L_333
L_333:  jmp     L_335
L_335:  jmp     L_337
L_337:  jmp     L_339
L_339:  jmp     L_33b
L_33b:  jmp     L_33d
L_33d:  jmp     L_33f
L_33f:  jmp     L_341
L_341:  jmp     L_343
L_343:  jmp     L_345
L_345:  jmp     L_347
L_347:  jmp     L_349
L_349:  jmp     L_34b
L_34b:  jmp     L_34d
L_34d:  jmp     L_34f
L_34f:  jmp     L_351
L_351:  jmp     L_353
L_353:
        pop     edi
        pop     esi
        mov     eax, edx
        pop     ebx
        pop     ebp
        ret
    }
}
