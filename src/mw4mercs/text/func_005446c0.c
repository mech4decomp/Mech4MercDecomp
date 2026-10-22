/*
 * FUN_005446C0 (317 B) — String formatting and dispatch function.
 *
 * __thiscall (ECX = this), RET 8 (two stack params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004ce190(int, int, int, int);
extern int __stdcall FUN_004cdfa0(int);
extern void __stdcall FUN_00702c20(int, int);
extern void __stdcall FUN_004cd7a0(int);
extern void __stdcall FUN_00540090(void);

__declspec(naked) void __stdcall FUN_005446c0(int param_1, int param_2)
{
    

extern int DAT_007db090;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
mov     al, byte ptr [esp + 0x8]
        sub     esp, 0x200
        test    al, al
        push    ebx
        push    ebp
        mov     ebp, dword ptr [esp + 0x20c]
        push    edi
        mov     ebx, ecx
        jz      loc_54477e

        or      ecx, 0xffffffff
        mov     eax, ebp
        shl     eax, 0x7
        add     eax, ebp
        shl     eax, 0x3
        sub     eax, ebp
        mov     edi, dword ptr [ebx + eax*8 + 0x3588]
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        push    esi
        mov     esi, edi
        lea     edx, [esp + 0x10]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     edx, dword ptr [ebx]
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x10]
        repne scasb
        not     ecx
        dec     ecx
        mov     byte ptr [esp + ecx*0x1 + 0x10], 0x20
        mov     byte ptr [esp + ecx*0x1 + 0x11], al
        push    0x2f0
        mov     ecx, ebx
        call    dword ptr [edx + 0x34]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [esp + 0x10]
        mov     edi, edx
        mov     edx, ecx
        or      ecx, 0xffffffff
        repne scasb
        mov     ecx, edx
        shr     ecx, 0x2
        dec     edi
        rep movsd
        mov     eax, dword ptr [ebx]
        mov     ecx, edx
        mov edx, dword ptr [DAT_007db090]
        and     ecx, 0x3
        rep movsb
        lea     ecx, [esp + 0x10]
        push    ecx
        xor     ecx, ecx
        mov     cl, byte ptr [edx + 0x28]
        push    0x0
        push    0x0
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax + 0x30]
        pop     esi

loc_54477e:
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        mov edi, dword ptr [DAT_007dab40]
        push    0x1
        push    0x0
        xor     eax, edi
        mov     ecx, dword ptr [eax + 0x14]
        push    0x36
        push    ebp
        xor     ecx, 0x85739531
        call    FUN_004ce190
        mov ecx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [ecx]
        xor eax, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [eax + 0x14]
        push    ebp
        xor     ecx, 0x85739531
        call    FUN_004cdfa0
        mov     eax, dword ptr [eax + 0x2c]
        push    eax
        push    0x0
        call    FUN_00702c20
        mov edx, dword ptr [DAT_007dab44]
        mov ecx, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x14]
        push    ebp
        xor     ecx, 0x85739531
        call    FUN_004cd7a0
        mov     ecx, ebx
        call    FUN_00540090
        pop     edi
        pop     ebp
        pop     ebx
        add     esp, 0x200
        ret     0x8
    }


}
