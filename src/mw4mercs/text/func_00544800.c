/*
 * FUN_00544800 (481 B) — String formatting, ban check, and dispatch.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0040dca0(int, int, int);
extern int __stdcall FUN_0040ecc0(int);
extern int __stdcall FUN_0040edc0(int);
extern void __stdcall FUN_00411c80(int, int);
extern void __stdcall FUN_0040e4a0(void);
extern void __stdcall FUN_00544b60(void);
extern void __stdcall FUN_005446c0(int, int);
extern void __stdcall FUN_0040de20(void);

__declspec(naked) void __stdcall FUN_00544800(int param_1)
{
    

extern int DAT_007db090;
extern int DAT_0076b420;
__asm {
mov     eax, dword ptr [esp + 0x4]
        sub     esp, 0x450
        push    ebx
        mov     ebx, ecx
        mov     ecx, eax
        shl     ecx, 0x7
        add     ecx, eax
        shl     ecx, 0x3
        sub     ecx, eax
        push    ebp
        lea     ebp, [ebx + ecx*0x8]
        or      ecx, 0xffffffff
        push    esi
        push    edi
        mov     edi, dword ptr [ebp + 0x3588]
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     eax, ecx
        shr     ecx, 0x2
        mov     esi, edi
        lea     edx, [esp + 0x60]
        mov     edi, edx
        rep movsd
        mov     ecx, eax
        and     ecx, 0x3
        rep movsb
        mov     edx, dword ptr [ebx]
        or      ecx, 0xffffffff
        xor     eax, eax
        lea     edi, [esp + 0x60]
        repne scasb
        not     ecx
        dec     ecx
        mov     byte ptr [esp + ecx*0x1 + 0x60], 0x20
        mov     byte ptr [esp + ecx*0x1 + 0x61], al
        push    0x2f1
        mov     ecx, ebx
        call    dword ptr [edx + 0x34]
        or      ecx, 0xffffffff
        mov     edi, eax
        xor     eax, eax
        repne scasb
        not     ecx
        sub     edi, ecx
        mov     esi, edi
        lea     edx, [esp + 0x60]
        mov     edi, edx
        mov     edx, ecx
        or      ecx, 0xffffffff
        repne scasb
        mov     ecx, edx
        shr     ecx, 0x2
        mov     eax, dword ptr [ebx]
        dec     edi
        rep movsd
        mov     ecx, edx
        mov edx, dword ptr [DAT_007db090]
        and     ecx, 0x3
        rep movsb
        lea     ecx, [esp + 0x60]
        push    ecx
        xor     ecx, ecx
        mov     cl, byte ptr [edx + 0x28]
        push    0x0
        push    0x0
        push    ecx
        mov     ecx, ebx
        call    dword ptr [eax + 0x30]
        push    0x0
        push    0x0
        push    0x77b7c0
        lea     ecx, [esp + 0x1c]
        call    FUN_0040dca0
        lea     esi, [ebp + 0x5558]
        mov     ecx, 0x4
        mov     edi, 0x7afaf0
        xor     edx, edx
        repz cmpsd
        mov edi, dword ptr [DAT_0076b420]
        jz      loc_544944

        push    0x77b7b8
        lea     ecx, [esp + 0x14]
        call    FUN_0040ecc0
        mov     esi, eax
        test    esi, esi
        jnz     loc_544902
        push    0x77b7b8
        lea     ecx, [esp + 0x14]
        call    FUN_0040edc0
        mov     esi, eax

loc_544902:
        mov     eax, dword ptr [ebp + 0x5564]
        mov     ecx, dword ptr [ebp + 0x5560]
        mov     edx, dword ptr [ebp + 0x555c]
        push    eax
        mov     eax, dword ptr [ebp + 0x5558]
        push    ecx
        push    edx
        push    eax
        lea     ecx, [esp + 0x270]
        push    0x77b744
        push    ecx
        call    edi
        add     esp, 0x18
        lea     edx, [esp + 0x260]
        push    edx
        push    0x77b7b8
        mov     ecx, esi
        call    FUN_00411c80

loc_544944:
        push    0x77b7b4
        lea     ecx, [esp + 0x14]
        call    FUN_0040ecc0
        mov     esi, eax
        test    esi, esi
        jnz     loc_544968
        push    0x77b7b4
        lea     ecx, [esp + 0x14]
        call    FUN_0040edc0
        mov     esi, eax

loc_544968:
        mov     eax, dword ptr [ebp + 0x35e8]
        mov     ecx, dword ptr [ebp + 0x35e4]
        mov     edx, dword ptr [ebp + 0x35e0]
        push    eax
        mov     eax, dword ptr [ebp + 0x35dc]
        push    ecx
        push    edx
        push    eax
        lea     ecx, [esp + 0x370]
        push    0x77b744
        push    ecx
        call    edi
        add     esp, 0x18
        lea     edx, [esp + 0x360]
        push    edx
        push    0x77b7b4
        mov     ecx, esi
        call    FUN_00411c80
        lea     ecx, [esp + 0x10]
        call    FUN_0040e4a0
        mov     ecx, ebx
        call    FUN_00544b60
        mov     eax, dword ptr [esp + 0x464]
        push    0x0
        push    eax
        mov     ecx, ebx
        call    FUN_005446c0
        lea     ecx, [esp + 0x10]
        call    FUN_0040de20
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x450
        ret     0x4
    }


}
