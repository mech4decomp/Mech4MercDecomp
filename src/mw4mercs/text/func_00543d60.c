/*
 * FUN_00543D60 (343 B) — Update/dispatch function.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int __stdcall FUN_00543ec0(void);
extern void __stdcall FUN_005436f0(void);
extern void __stdcall FUN_00540090(void);
extern void __stdcall FUN_00540100(int);
extern void __stdcall FUN_004084e0(int);

__declspec(naked) void __stdcall FUN_00543d60(int param_1, int param_2)
{
    

extern int DAT_007db094;
extern int DAT_007db090;
__asm {
sub     esp, 0x8
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     ebx, dword ptr [esi + 0x50]
        mov     eax, dword ptr [ebx + 0xe4]
        test    eax, eax
        push    edi
        mov     dword ptr [esp + 0x14], ebx
        jz      loc_543ead

        mov     ecx, dword ptr [esp + 0x20]
        mov     eax, dword ptr [ecx]
        push    0x1
        lea     edx, [esp + 0x14]
        push    edx
        mov     dword ptr [esp + 0x18], 0x0
        call    dword ptr [eax + 0x20]
        mov     ebp, dword ptr [esp + 0x1c]
        mov     ecx, dword ptr [esp + 0x10]
        mov     eax, ebp
        shl     eax, 0x7
        add     eax, ebp
        shl     eax, 0x3
        sub     eax, ebp
        lea     edi, [esi + eax*0x8]
        cmp     ecx, dword ptr [edi + 0x3548]
        jnz     loc_543dde

        mov edx, dword ptr [DAT_007db094]
        xor     ecx, ecx
        mov     cl, byte ptr [edx + 0x28]
        cmp     ebp, ecx
        jnz     loc_543ead
        mov     ecx, esi
        call    FUN_00543ec0
        mov     edi, eax
        test    edi, edi
        jz      loc_543ead
        jmp     loc_543e8c

loc_543dde:
        cmp     dword ptr [edi + 0x3554], 0x2c
        mov     eax, 0x8
        jnz     loc_543df2
        mov     dword ptr [edi + 0x3548], eax

loc_543df2:
        cmp     ecx, eax
        jnz     loc_543dfe
        mov     dword ptr [edi + 0x3548], eax
        jmp     loc_543e78

loc_543dfe:
        cmp     ecx, dword ptr [ebx + 0xe8]
        jge     loc_543ead
        xor     ebx, ebx
        lea     eax, [esi + 0x3548]
        mov     edx, 0xff

loc_543e17:
        cmp     byte ptr [eax + -0x10], 0x0
        jz      loc_543e22
        cmp     dword ptr [eax], ecx
        jnz     loc_543e22
        inc     ebx

loc_543e22:
        add     eax, 0x2038
        dec     edx
        jnz     loc_543e17

        lea     eax, [esi + 0x205f38]
        mov     edx, 0x18

loc_543e35:
        cmp     byte ptr [eax + -0x4], 0x0
        jz      loc_543e40
        cmp     dword ptr [eax], ecx
        jnz     loc_543e40
        inc     ebx

loc_543e40:
        add     eax, 0x22ac
        dec     edx
        jnz     loc_543e35

        mov     edx, dword ptr [esp + 0x14]
        lea     eax, [ecx + ecx*0x4]
        shl     eax, 0x4
        inc     ebx
        cmp     ebx, dword ptr [eax + edx*0x1 + 0xec]
        jg      loc_543e78
        mov     dword ptr [edi + 0x3548], ecx
        mov     ecx, esi
        mov     byte ptr [edi + 0x3539], 0x0
        call    FUN_00540090
        push    ebp
        mov     ecx, esi
        call    FUN_00540100

loc_543e78:
        mov     ecx, esi
        call    FUN_005436f0
        mov     ecx, esi
        call    FUN_00543ec0
        mov     edi, eax
        test    edi, edi
        jz      loc_543ead

loc_543e8c:
        mov ecx, dword ptr [DAT_007db090]
        mov     eax, dword ptr [esi]
        xor     edx, edx
        mov     dl, byte ptr [ecx + 0x28]
        push    edi
        push    0x0
        push    0x0
        mov     ecx, esi
        push    edx
        call    dword ptr [eax + 0x30]
        push    edi
        call    FUN_004084e0
        add     esp, 0x4

loc_543ead:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x8
        ret     0x8
    }


}
