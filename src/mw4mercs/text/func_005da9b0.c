/*
 * FUN_005da9b0 (22 B) — __fastcall (ECX = param). If [param] != 0,
 * frees it via FUN_004084e0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004084e0(void *p);

__declspec(naked) void FUN_005da9b0(void)
{
    
__asm {
push    ecx
        mov     eax, dword ptr [ecx]
        test    eax, eax
        __emit 0x89 /* __emit: MSVC6 drops disp8 on mov [esp],eax (emits 89 04 24) */
        __emit 0x44
        __emit 0x24
        __emit 0x00
        jz      L9C4
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L9C4:
        pop     ecx
        ret
    }


}
