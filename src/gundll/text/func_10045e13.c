/*
 * FUN_10045e13 (43 B) — __cdecl.
 * If (param[3] & 0x83) && (param[3] & 8): call FUN_1003c2dc(param[2]),
 * clear low word bits 0xfbf7, zero fields 0/4/8.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_1003c2dc(void);

__declspec(naked) void FUN_10045e13(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [esp + 0x8]
        mov     eax, dword ptr [esi + 0xc]
        test    al, 0x83
        jz      done
        test    al, 0x8
        jz      done
        push    dword ptr [esi + 0x8]
        call    FUN_1003c2dc
        and     word ptr [esi + 0xc], 0fbf7h
        xor     eax, eax
        pop     ecx
        mov     dword ptr [esi], eax
        mov     dword ptr [esi + 0x8], eax
        mov     dword ptr [esi + 0x4], eax
    done:
        pop     esi
        ret
    }
}
