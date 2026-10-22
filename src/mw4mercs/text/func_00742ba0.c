/*
 * FUN_00742ba0 (608 B) — pixel format conversion routine. Queries a
 * format descriptor, converts a run of pixels through a bit-shift
 * pipeline (FUN_00742a70/90/b0 helpers), and writes 16-bit results.
 *
 * __stdcall, RET 0x24 (9 params).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern char g_85a26c;      /* byte */
extern char g_859c2c[];    /* byte lookup table */

extern void __stdcall FUN_007353f0(int, int, void *, int, int);
extern void __stdcall FUN_00735440(int, int);
extern int  __stdcall FUN_00742a70(int);
extern int  __stdcall FUN_00742a90(int);
extern int  __stdcall FUN_00742ab0(int);

__declspec(naked) void __stdcall FUN_00742ba0(
    int param_1, int param_2, int param_3, int param_4, int param_5,
    int param_6, int param_7, int param_8, int param_9)
{
    __asm {
        sub     esp, 0xb0
        mov     ecx, dword ptr [esp + 0xb8]
        push    ebx
        mov     ebx, dword ptr [esp + 0xc4]
        push    ebp
        push    esi
        mov     esi, dword ptr [esp + 0xdc]
        push    edi
        push    0x0
        push    0x821
        lea     eax, [esp + 0x4c]
        push    eax
        shr     ebx, 0x2
        push    0x0
        sub     ebx, esi
        push    ecx
        mov     dword ptr [esp + 0xe4], ebx
        mov     dword ptr [esp + 0x58], 0x7c
        call    FUN_007353f0
        mov     eax, dword ptr [esp + 0x54]
        mov     ebp, dword ptr [esp + 0xd8]
        mov     edx, dword ptr [esp + 0x68]
        sar     eax, 0x1
        mov     ecx, eax
        imul    eax, dword ptr [esp + 0xdc]
        add     eax, ebp
        sub     ecx, esi
        lea     esi, [edx + eax*0x2]
        mov     eax, dword ptr [esp + 0x9c]
        push    eax
        mov     dword ptr [esp + 0x40], ecx
        call    FUN_00742a70
        mov     ecx, dword ptr [esp + 0x9c]
        push    ecx
        mov     edi, eax
        call    FUN_00742a90
        mov     edx, dword ptr [esp + 0x9c]
        push    edx
        mov     ebp, eax
        call    FUN_00742ab0
        mov     dword ptr [esp + 0x1c], eax
        mov     eax, dword ptr [esp + 0xa0]
        push    eax
        call    FUN_00742a70
        mov     ecx, dword ptr [esp + 0xa0]
        push    ecx
        mov     dword ptr [esp + 0x3c], eax
        call    FUN_00742a90
        mov     edx, dword ptr [esp + 0xa0]
        push    edx
        mov     dword ptr [esp + 0x44], eax
        call    FUN_00742ab0
        mov     dword ptr [esp + 0x28], eax
        mov     eax, dword ptr [esp + 0xa4]
        push    eax
        call    FUN_00742a70
        mov     ecx, dword ptr [esp + 0xa4]
        push    ecx
        mov     dword ptr [esp + 0x30], eax
        call    FUN_00742a90
        mov     edx, dword ptr [esp + 0xa8]
        push    edx
        mov     dword ptr [esp + 0x38], eax
        call    FUN_00742a70
        mov     dword ptr [esp + 0x30], eax
        mov     eax, dword ptr [esp + 0xa8]
        push    eax
        call    FUN_00742a90
        mov     ecx, dword ptr [esp + 0xa8]
        push    ecx
        mov     dword ptr [esp + 0x24], eax
        call    FUN_00742ab0
        mov     dword ptr [esp + 0x24], eax
        mov     eax, dword ptr [esp + 0xe4]
        test    eax, eax
        jbe     L_de4
        mov     dword ptr [esp + 0x18], eax
    L_cd7:
        mov     eax, dword ptr [esp + 0xe0]
        test    eax, eax
        jbe     L_dbd
        mov     dword ptr [esp + 0x14], eax
    L_cea:
        mov     ecx, dword ptr [esp + 0xcc]
        mov     eax, dword ptr [ecx]
        add     ecx, 0x4
        mov     dword ptr [esp + 0xcc], ecx
        mov     cl, byte ptr [g_85a26c]
        test    cl, cl
        mov     dword ptr [esp + 0x10], eax
        jz      L_d4c
        xor     edx, edx
        mov     dl, byte ptr [esp + 0x12]
        xor     ecx, ecx
        xor     ebx, ebx
        mov     cl, byte ptr [edx + g_859c2c]
        mov     edx, ecx
        xor     ecx, ecx
        mov     cl, ah
        shl     edx, 0x8
        mov     bl, byte ptr [ecx + g_859c2c]
        mov     ecx, eax
        and     ecx, 0xff
        and     eax, 0xff000000
        add     edx, ebx
        xor     ebx, ebx
        mov     bl, byte ptr [ecx + g_859c2c]
        shl     edx, 0x8
        add     edx, ebx
        add     eax, edx
        mov     dword ptr [esp + 0x10], eax
    L_d4c:
        mov     ecx, dword ptr [esp + 0x38]
        xor     edx, edx
        mov     dl, ah
        xor     ebx, ebx
        mov     bl, byte ptr [esp + 0x12]
        add     esi, 0x2
        shr     edx, cl
        and     edx, dword ptr [esp + 0x40]
        mov     ecx, dword ptr [esp + 0x28]
        shl     edx, cl
        mov     ecx, edi
        shr     ebx, cl
        mov     ecx, dword ptr [esp + 0x1c]
        and     ebx, ebp
        shl     ebx, cl
        mov     ecx, dword ptr [esp + 0x30]
        or      edx, ebx
        mov     ebx, eax
        shr     ebx, 0x18
        shr     ebx, cl
        mov     ecx, dword ptr [esp + 0x20]
        and     eax, 0xff
        and     ebx, ecx
        mov     ecx, dword ptr [esp + 0x24]
        shl     ebx, cl
        mov     ecx, dword ptr [esp + 0x2c]
        shr     eax, cl
        mov     ecx, dword ptr [esp + 0x34]
        or      edx, ebx
        and     eax, ecx
        or      edx, eax
        mov     eax, dword ptr [esp + 0x14]
        mov     word ptr [esi - 0x2], dx
        dec     eax
        mov     dword ptr [esp + 0x14], eax
        jnz     L_cea
        mov     ebx, dword ptr [esp + 0xd0]
    L_dbd:
        mov     eax, dword ptr [esp + 0x3c]
        mov     ecx, dword ptr [esp + 0xcc]
        lea     esi, [esi + eax*0x2]
        mov     eax, dword ptr [esp + 0x18]
        lea     edx, [ecx + ebx*0x4]
        dec     eax
        mov     dword ptr [esp + 0xcc], edx
        mov     dword ptr [esp + 0x18], eax
        jnz     L_cd7
    L_de4:
        mov     eax, dword ptr [esp + 0xc8]
        push    0x0
        push    eax
        call    FUN_00735440
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0xb0
        ret     0x24
    }
}
