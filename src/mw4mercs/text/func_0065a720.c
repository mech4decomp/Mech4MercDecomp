/*
 * FUN_0065a720 (81 B) — __cdecl, one stack arg. Looks up an object via
 * FUN_004fcb30, validates a flag bit, then checks FUN_00415230 before
 * returning the object pointer (or 0).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern unsigned int g_7dab44;
extern unsigned int g_7dab40;
extern unsigned int g_7f268c;
extern void __cdecl FUN_004fcb30(void *param);
extern char __stdcall FUN_00415230(unsigned int param);

__declspec(naked) int __cdecl FUN_0065a720(void *param_1)
{
    __asm {
        mov     eax, dword ptr [g_7dab44]
        mov     ecx, dword ptr [g_7dab40]
        mov     eax, dword ptr [eax]
        xor     eax, ecx
        mov     ecx, dword ptr [esp + 4]
        push    esi
        push    ecx
        mov     ecx, dword ptr [eax + 0x10]
        xor     ecx, 0x85739531
        call    FUN_004fcb30
        mov     esi, eax
        test    esi, esi
        jz      L_ret0
        mov     edx, dword ptr [esi + 0x10]
        shr     edx, 0x13
        and     dl, 0x1
        cmp     dl, 0x1
        jz      L_ret0
        mov     eax, dword ptr [g_7f268c]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      L_ret0
        mov     eax, esi
        pop     esi
        ret
    L_ret0:
        xor     eax, eax
        pop     esi
        ret
    }
}
