/*
 * FUN_005e1340 (113 B) — Iterates a list of objects, matching param_1.
 *
 * __cdecl, RET (caller cleans up one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0041fd80(void);
extern char __cdecl FUN_00415230(int param);
extern int __cdecl FUN_005df620(void);
extern void __cdecl FUN_005e0bd0(void);

__declspec(naked) void __cdecl FUN_005e1340(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f2524;
__asm {
mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx + 0x10]
        xor     ecx, 0x85739531
        jz      label_13b0
        mov     eax, dword ptr [ecx + 0x8c]
        test    eax, eax
        jle     label_13b0
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0xc]
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 0x88]
        add     edi, 0x14
        mov     ebx, eax
    label_1375:
        mov     ecx, dword ptr [edi]
        call    FUN_0041fd80
        mov     esi, eax
        test    esi, esi
        jz      label_13a6
        mov eax, dword ptr [DAT_007f2524]
        mov     ecx, dword ptr [esi + 0x4]
        push    eax
        call    FUN_00415230
        cmp     al, 0x1
        jnz     label_13a6
        mov     ecx, esi
        call    FUN_005df620
        cmp     eax, ebp
        jnz     label_13a6
        mov     ecx, esi
        call    FUN_005e0bd0
    label_13a6:
        add     edi, 0x1c
        dec     ebx
        jnz     label_1375
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
    label_13b0:
        ret
    }


}
