/*
 * FUN_00749850 (76 B) — __thiscall (ECX = this), no stack args.
 *
 * Releases three members (0x14, 0x0, 0x8) via helper frees, and calls
 * FUN_00749950 when member 0xC != 4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006F4230(void *p);
extern void __cdecl FUN_00749950(void);
extern void __cdecl FUN_00740DB0(void *p);

__declspec(naked) void __cdecl FUN_00749850(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     eax, dword ptr [esi + 0x14]
        test    eax, eax
        jz      skip1
        push    eax
        call    FUN_006F4230
        mov     dword ptr [esi + 0x14], 0x0
skip1:
        cmp     dword ptr [esi + 0xC], 0x4
        jz      skip2
        mov     ecx, esi
        call    FUN_00749950
skip2:
        mov     eax, dword ptr [esi]
        test    eax, eax
        jz      skip3
        push    eax
        call    FUN_00740DB0
        mov     dword ptr [esi], 0x0
skip3:
        mov     eax, dword ptr [esi + 0x8]
        test    eax, eax
        jz      done
        push    eax
        call    FUN_00740DB0
        mov     dword ptr [esi + 0x8], 0x0
done:
        pop     esi
        ret
    }
}
