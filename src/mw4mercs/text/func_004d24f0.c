/*
 * FUN_004d24f0 (308 B) — MLR network subsystem: renderer-table lookup /
 * registration helper. __thiscall (this=ECX), RET 0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_006fbd50(void);
extern void __cdecl FUN_00416f60(void);
extern void __cdecl FUN_00413be0(void);
extern void __cdecl FUN_0041e690(void);
extern void __cdecl FUN_00412570(void);
extern void __cdecl FUN_00412ec0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_0041e710(void);

extern unsigned int g_007db0b8;
extern unsigned int g_007b87f4;

__declspec(naked) void FUN_004d24f0(void)
{
    __asm {
        sub     esp, 0x50
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     ebx, dword ptr [esi + 0x30]
        mov     ebp, dword ptr [esi + 0x2c]
        mov     byte ptr [esp + 0xf], 0x1
        mov     dword ptr [esp + 0x18], ebx
        call    FUN_006fbd50
        cmp     ebp, eax
        jnz     L_4d251d
        cmp     ebx, edx
        jnz     L_4d251d
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x50
        ret
L_4d251d:
        xor     eax, eax
        mov     ax, word ptr [esi + 0x40]
        lea     ecx, [esp + 0x10]
        push    ecx
        mov     dword ptr [esp + 0x14], eax
        mov     eax, dword ptr [g_007db0b8]
        lea     ecx, [eax + 0x14]
        call    FUN_00416f60
        mov     ecx, dword ptr [eax + 0x14]
        test    ecx, ecx
        jnz     L_4d2549
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0x50
        ret
L_4d2549:
        push    edi
        add     esi, 0x20
        mov     ecx, 0x8
        lea     edi, [esp + 0x40]
        rep movsd
        mov     edx, dword ptr [eax + 0x14]
        push    0x1
        lea     ecx, [esp + 0x44]
        mov     dword ptr [esp + 0x44], edx
        call    FUN_00413be0
        mov     eax, dword ptr [esp + 0x54]
        mov     ecx, dword ptr [esp + 0x58]
        push    0x0
        push    eax
        push    ecx
        lea     ecx, [esp + 0x2c]
        call    FUN_0041e690
        mov     eax, dword ptr [esp + 0x30]
        mov     edx, dword ptr [esp + 0x34]
        mov     ecx, dword ptr [esp + 0x3c]
        sub     eax, edx
        add     eax, ecx
        jz      L_4d260f
        jmp     L_4d2597
L_4d2593:
        mov     ebx, dword ptr [esp + 0x1c]
L_4d2597:
        or      ecx, 0xffffffff
        xor     eax, eax
        mov     edi, edx
        repne scasb
        not     ecx
        dec     ecx
        mov     esi, ecx
        push    edx
        lea     ecx, [esp + 0x18]
        call    FUN_00412570
        push    ebx
        push    ebp
        lea     ecx, [esp + 0x1c]
        push    ecx
        mov     ecx, dword ptr [g_007b87f4]
        call    FUN_00412ec0
        mov     bl, al
        mov     eax, dword ptr [esp + 0x14]
        test    eax, eax
        jz      L_4d25de
        mov     cl, byte ptr [eax - 0x1]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     L_4d25de
        push    eax
        call    FUN_004084e0
        add     esp, 0x4
L_4d25de:
        test    bl, bl
        jnz     L_4d260a
        mov     edx, dword ptr [esp + 0x34]
        mov     eax, dword ptr [esp + 0x38]
        lea     edx, [edx + esi + 0x1]
        cmp     edx, eax
        mov     dword ptr [esp + 0x34], edx
        jbe     L_4d25fa
        mov     dword ptr [esp + 0x38], edx
L_4d25fa:
        mov     eax, dword ptr [esp + 0x30]
        mov     ecx, dword ptr [esp + 0x3c]
        sub     eax, edx
        add     eax, ecx
        jnz     L_4d2593
        jmp     L_4d260f
L_4d260a:
        mov     byte ptr [esp + 0x13], 0x0
L_4d260f:
        lea     ecx, [esp + 0x20]
        call    FUN_0041e710
        mov     al, byte ptr [esp + 0x13]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x50
        ret
    }
}
