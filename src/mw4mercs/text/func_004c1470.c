/*
 * FUN_004C1470 (495 B) — MLR node constructor (thiscall, 4 stack args).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007b3800[];
extern int DAT_007b3b28[];
extern int DAT_007b3900[];
extern float DAT_00770554;
extern char DAT_007daae9;
extern char DAT_007daaea;

extern void FUN_004c66b0(void *this);
extern void *FUN_00421e60(void *this);
extern int FUN_006fab90(void *this);
extern void FUN_00429860(void *this);
extern void FUN_00487900(void *this);
extern char FUN_004c1920(void *this);

__declspec(naked) void *__fastcall FUN_004c1470(void)
{
    __asm {
        push    ebp
        mov     ebp, esp
        mov     eax, dword ptr [ebp + 0x10]
        mov     edx, dword ptr [ebp + 0x8]
        push    ebx
        push    esi
        push    edi
        mov     ebx, ecx
        mov     ecx, dword ptr [ebp + 0xc]
        push    eax
        push    ecx
        push    edx
        mov     ecx, ebx
        call    FUN_004c66b0

        mov     eax, dword ptr [ebx + 0x18]
        mov     ecx, eax
        shr     ecx, 0x2
        and     ecx, 0x3f
        mov     edx, dword ptr [ecx*4 + DAT_007b3800]
        mov     ecx, eax
        shr     ecx, 0x5
        and     ecx, 0x1f
        lea     ecx, [ecx + ecx*0x2]
        shl     ecx, 0x2
        mov     dword ptr [ebx + 0x1c], edx
        mov     edx, dword ptr [ecx + DAT_007b3b28]
        mov     dword ptr [ebx + 0x130], edx
        mov     edx, dword ptr [ecx + 0x4 + DAT_007b3b28]
        mov     ecx, dword ptr [ecx + 0x8 + DAT_007b3b28]
        mov     dword ptr [ebx + 0x138], ecx
        shr     eax, 0xa
        lea     edi, [ebx + 0x144]
        mov     ecx, 0xc
        mov     esi, 0x7b9460
        mov     dword ptr [ebx], 0x7715d4
        and     eax, 0x1
        rep movsd
        mov     esi, dword ptr [ebp + 0xc]
        mov     dword ptr [ebx + 0x134], edx
        mov     edx, dword ptr [eax*4 + DAT_007b3900]
        push    esi
        mov     dword ptr [ebx + 0x13c], edx
        call    FUN_00421e60
        mov     edi, eax
        add     esp, 0x4
        cmp     edi, -0x1
        jnz     l_edi_ok
        mov     edi, dword ptr [ebp + 0x10]
    l_edi_ok:
        cmp     dword ptr [ebp + 0x10], 0xd
        jge     l_big
        cmp     edi, 0xe
        jl      l_small
        mov     eax, dword ptr [esi]
        push    0x4
        lea     ecx, [ebp + 0x10]
        push    ecx
        mov     ecx, esi
        call    dword ptr [eax + 0x20]
        mov     eax, dword ptr [ebp + 0x10]
        cmp     eax, 0x4b
        jz      l_small
        cmp     eax, 0x74
        jz      l_mid
        push    0x7715bc
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      l_after
        int     3
        jmp     l_after

    l_big:
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [ebp + 0x10]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [ebp + 0x14]
        test    eax, eax
        jz      l_no_cb
        mov     ecx, dword ptr [ebp + 0x10]
        push    ecx
        push    edi
        push    esi
        call    eax
        add     esp, 0xc
        jmp     l_store
    l_no_cb:
        mov     edx, dword ptr [esi]
        push    0x4
        lea     eax, [ebp + 0xc]
        push    eax
        mov     ecx, esi
        call    dword ptr [edx + 0x20]
        mov     eax, dword ptr [ebp + 0xc]
        cmp     eax, 0x4b
        jz      l_small
        cmp     eax, 0x74
        jz      l_mid
        push    0x7715bc
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      l_after
        int     3
        jmp     l_after

    l_mid:
        push    edi
        push    esi
        call    FUN_00429860
        jmp     l_join
    l_small:
        push    edi
        push    esi
        call    FUN_00487900
    l_join:
        add     esp, 0x8
    l_store:
        mov     dword ptr [ebx + 0x174], eax

    l_after:
        mov     ecx, dword ptr [ebx + 0x18]
        shr     ecx, 0x5
        not     cl
        test    cl, 0x1
        jz      l_scale_vec
        fld     dword ptr [ebx + 0xec]
        fmul    dword ptr [DAT_00770554]
        fstp    dword ptr [ebx + 0xec]
        jmp     l_scale_done
    l_scale_vec:
        fld     dword ptr [ebx + 0xe0]
        fmul    dword ptr [DAT_00770554]
        fstp    dword ptr [ebx + 0xe0]
        fld     dword ptr [ebx + 0xe4]
        fmul    dword ptr [DAT_00770554]
        fstp    dword ptr [ebx + 0xe4]
        fld     dword ptr [ebx + 0xe8]
        fmul    dword ptr [DAT_00770554]
        fstp    dword ptr [ebx + 0xe8]
        fld     dword ptr [ebx + 0xe8]
        fld     dword ptr [ebx + 0xe4]
        fld     dword ptr [ebx + 0xe0]
        fld     st(0)
        fmul    st(0), st(1)
        fld     st(2)
        fmul    st(0), st(3)
        faddp   st(1), st(0)
        fld     st(3)
        fmul    st(0), st(4)
        faddp   st(1), st(0)
        fsqrt
        fstp    dword ptr [ebx + 0xec]
        fstp    st(0)
        fstp    st(0)
        fstp    st(0)
    l_scale_done:
        mov     al, byte ptr [DAT_007daae9]
        test    al, al
        jz      l_ret
        mov     ecx, ebx
        call    FUN_004c1920
        test    al, al
        jnz     l_ret
        mov     byte ptr [DAT_007daaea], 0x1
    l_ret:
        pop     edi
        pop     esi
        mov     eax, ebx
        pop     ebx
        pop     ebp
        ret     0x10
    }
}
