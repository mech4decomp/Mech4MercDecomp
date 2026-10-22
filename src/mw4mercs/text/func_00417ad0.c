/*
 * FUN_00417ad0 (35 B) — __fastcall. Pops the node at [ECX+8] off a list
 * (advancing [ECX+8] to its +4 next), then destroys the node via
 * FUN_00417890 and frees it via FUN_00416130.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c20;
extern void __cdecl FUN_00417890(void);
extern void __cdecl FUN_00416130(void);

__declspec(naked) void FUN_00417ad0(void)
{
    __asm {
        push    esi
        mov     esi, dword ptr [ecx + 0x8]
        test    esi, esi
        mov     eax, dword ptr [esi + 0x4]
        mov     dword ptr [ecx + 0x8], eax
        jz      done
        mov     ecx, esi
        call    FUN_00417890
        mov     ecx, dword ptr [g_007b8c20]
        push    esi
        call    FUN_00416130
    done:
        pop     esi
        ret
    }
}
