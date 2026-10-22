/*
 * FUN_100072b0 (273 B) - __stdcall, RET 0x8.
 * SEH-guarded: if param_2+4 is zero returns 0xc1120008. If param_2+0x20 < 0
 * sets param_1+0x40/0x44 and returns it. Otherwise allocates a 0x20 object
 * (FUN_10001d50/FUN_1000d760), registers it (FUN_1000d7d0), builds a 5-dword
 * struct and dispatches through param_1+0x30's vtable method +0xc. On success
 * sets param_1+0x40=2 and calls FUN_10005a40 if param_1+0x90 is nonzero.
 *
 * __stdcall.
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_10001d50(void);       /* rel32 call, 1 arg, returns ptr */
extern void __cdecl FUN_1000d760(void);       /* rel32 call, thiscall */
extern void __cdecl FUN_1000d7d0(void);       /* rel32 call, 3 args */
extern void __cdecl FUN_10005a40(void);       /* rel32 call, 1 arg */

__declspec(naked) void __stdcall FUN_100072b0(void)
{
    __asm {
        mov     eax, dword ptr fs:[0]
        mov     ecx, dword ptr [esp + 0x8]
        push    -1
        push    0x100471eb
        push    eax
        mov     dword ptr fs:[0], esp
        mov     al, byte ptr [ecx + 0x4]
        sub     esp, 0x14
        test    al, al
        push    esi
        push    edi
        jnz     L_72ed
        pop     edi
        mov     eax, 0xc1120008
        pop     esi
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x20
        ret     0x8
    L_72ed:
        mov     eax, dword ptr [ecx + 0x20]
        test    eax, eax
        mov     edi, dword ptr [ecx + 0x24]
        jge     L_7318
        mov     ecx, dword ptr [esp + 0x2c]
        pop     edi
        mov     dword ptr [ecx + 0x40], 0x4
        mov     dword ptr [ecx + 0x44], eax
        pop     esi
        mov     ecx, dword ptr [esp + 0x14]
        mov     dword ptr fs:[0], ecx
        add     esp, 0x20
        ret     0x8
    L_7318:
        push    0x20
        call    FUN_10001d50
        add     esp, 0x4
        mov     dword ptr [esp + 0x30], eax
        test    eax, eax
        mov     dword ptr [esp + 0x24], 0x0
        jz      L_733d
        mov     ecx, eax
        call    FUN_1000d760
        mov     esi, eax
        jmp     L_733f
    L_733d:
        xor     esi, esi
    L_733f:
        push    edi
        push    0x0
        push    esi
        mov     dword ptr [esp + 0x30], 0xffffffff
        call    FUN_1000d7d0
        mov     edi, dword ptr [esp + 0x2c]
        mov     eax, dword ptr [edi + 0x30]
        lea     edx, [esp + 0x8]
        push    edx
        mov     dword ptr [esp + 0xc], 0x4
        mov     dword ptr [esp + 0x10], 0x1
        mov     dword ptr [esp + 0x14], 0x0
        mov     dword ptr [esp + 0x1c], esi
        mov     dword ptr [esp + 0x18], 0x0
        mov     ecx, dword ptr [eax]
        push    eax
        call    dword ptr [ecx + 0xc]
        mov     esi, eax
        test    esi, esi
        jge     L_7395
        mov     dword ptr [edi + 0x40], 0x4
        jmp     L_73ac
    L_7395:
        mov     eax, dword ptr [edi + 0x90]
        test    eax, eax
        mov     dword ptr [edi + 0x40], 0x2
        jz      L_73ac
        push    edi
        call    FUN_10005a40
    L_73ac:
        mov     ecx, dword ptr [esp + 0x1c]
        pop     edi
        mov     eax, esi
        pop     esi
        mov     dword ptr fs:[0], ecx
        add     esp, 0x20
        ret     0x8
    }
}
