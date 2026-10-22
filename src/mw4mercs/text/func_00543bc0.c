/*
 * FUN_00543BC0 (407 B) — Serialization/update function.
 *
 * __thiscall (ECX = this), RET 4 (one stack param).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_0041ee70(int);
extern void __stdcall FUN_0041f030(int, int);
extern void __stdcall FUN_0041ef60(void);
extern void __stdcall FUN_004ce190(int, int, int, int);

__declspec(naked) void __stdcall FUN_00543bc0(int param_1)
{
    

extern int DAT_007db094;
extern int DAT_007dab44;
extern int DAT_007dab40;
__asm {
sub     esp, 0x38
        push    ebp
        push    edi
        mov     ebp, ecx
        push    0x0
        lea     ecx, [esp + 0x1c]
        call    FUN_0041ee70
        xor     eax, eax
        mov     dword ptr [esp + 0x8], eax

loc_543bd8:
        mov     ecx, eax
        shl     ecx, 0x7
        add     ecx, eax
        shl     ecx, 0x3
        sub     ecx, eax
        mov     dl, byte ptr [ebp + ecx*8 + 0x3538]
        test    dl, dl
        jz      loc_543ca1
        push    0x1
        lea     edx, [esp + 0xc]
        push    edx
        lea     ecx, [esp + 0x20]
        call    FUN_0041f030
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, eax
        shl     ecx, 0x7
        add     ecx, eax
        shl     ecx, 0x3
        sub     ecx, eax
        mov     edi, dword ptr [ebp + ecx*8 + 0x358c]
        test    edi, edi
        jz      loc_543c5a
        or      ecx, 0xffffffff
        xor     eax, eax
        repne scasb
        not     ecx
        push    0x4
        lea     edx, [esp + 0x10]
        mov     dword ptr [esp + 0x10], ecx
        push    edx
        lea     ecx, [esp + 0x20]
        call    FUN_0041f030
        mov     eax, dword ptr [esp + 0xc]
        push    eax
        mov     eax, dword ptr [esp + 0xc]
        mov     ecx, eax
        shl     ecx, 0x7
        add     ecx, eax
        shl     ecx, 0x3
        sub     ecx, eax
        mov     edx, dword ptr [ebp + ecx*8 + 0x358c]
        push    edx
        jmp     loc_543c69

loc_543c5a:
        push    0x4
        lea     eax, [esp + 0x14]
        mov     dword ptr [esp + 0x14], 0x0
        push    eax

loc_543c69:
        lea     ecx, [esp + 0x20]
        call    FUN_0041f030
        mov     eax, dword ptr [esp + 0x8]
        mov     ecx, eax
        shl     ecx, 0x7
        add     ecx, eax
        shl     ecx, 0x3
        sub     ecx, eax
        mov     edx, dword ptr [ebp + ecx*8 + 0x3590]
        push    0x4
        lea     eax, [esp + 0x18]
        push    eax
        lea     ecx, [esp + 0x20]
        mov     dword ptr [esp + 0x1c], edx
        call    FUN_0041f030
        mov     eax, dword ptr [esp + 0x8]

loc_543ca1:
        inc     eax
        cmp     eax, 0xff
        mov     dword ptr [esp + 0x8], eax
        jl      loc_543bd8

        mov     ecx, dword ptr [esp + 0x30]
        sub     ecx, dword ptr [esp + 0x28]
        jz      loc_543d48
        push    esi
        xor     edi, edi
        mov     esi, 0x8
        add     ebp, 0x3538

loc_543ccd:
        cmp     byte ptr [ebp], 0x0
        jz      loc_543d35
        mov eax, dword ptr [DAT_007db094]
        xor     edx, edx
        mov     dl, byte ptr [eax + 0x28]
        cmp     edi, edx
        jz      loc_543d35
        mov     edx, dword ptr [esp + 0x2c]
        mov     ecx, dword ptr [esp + 0x34]
        sub     ecx, edx
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, dword ptr [edx]
        xor eax, dword ptr [DAT_007dab40]
        lea     edx, [eax + 0x14]
        mov     eax, dword ptr [edx]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax + 0x1814]
        shl     ecx, 0x3
        add     dword ptr [esi + eax + 0x3c3c], ecx
        add     dword ptr [eax + 0x483c], ecx
        add     eax, 0x3c3c
        push    0x1
        lea     ecx, [esp + 0x20]
        push    ecx
        mov     ecx, dword ptr [edx]
        push    0x31
        push    edi
        xor     ecx, 0x85739531
        call    FUN_004ce190

loc_543d35:
        add     esi, 0x4
        inc     edi
        add     ebp, 0x2038
        cmp     esi, 0x404
        jl      loc_543ccd
        pop     esi

loc_543d48:
        lea     ecx, [esp + 0x18]
        call    FUN_0041ef60
        pop     edi
        pop     ebp
        add     esp, 0x38
        ret
    }


}
