/*
 * FUN_00417a60 (57 B) — __thiscall. Allocates/inserts a node into a
 * container via FUN_004178d0, storing the result into the object if the
 * returned node's +8 field is null.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_007b8c20;
extern void __cdecl FUN_00416110(void);
extern void __cdecl FUN_004178d0(void);

__declspec(naked) void FUN_00417a60(void)
{
    __asm {
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [g_007b8c20]
        call    FUN_00416110
        test    eax, eax
        jz      usezero
        mov     ecx, dword ptr [esp + 0xc]
        mov     edx, dword ptr [ecx + 0x8]
        push    edx
        push    ecx
        mov     ecx, dword ptr [esp + 0x10]
        push    ecx
        push    esi
        mov     ecx, eax
        call    FUN_004178d0
        jmp     merge
    usezero:
        xor     eax, eax
    merge:
        mov     ecx, dword ptr [eax + 0x8]
        test    ecx, ecx
        jnz     done
        mov     dword ptr [esi], eax
    done:
        pop     esi
        ret     0x8
    }
}
