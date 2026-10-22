/*
 * FUN_005bf780 (443 B) - __thiscall color-formatting output routine.
 *
 * Builds a packed 32-bit color from four float components (each clamped
 * to 0..255 via the FADD/RCL/SBB/XOR/SETA idiom), then emits several
 * sprintf-style "/color=..." strings through FUN_00728fd0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_00728fd0(void *buf);
extern int  __stdcall FUN_0075db4a(int param);
extern void __stdcall FUN_007275f0(int value);
extern int  __stdcall FUN_0050e1b0(int param);

__declspec(naked) void __stdcall FUN_005bf780(void)
{
    

extern int DAT_00787200;
extern int DAT_0076b420;
extern int DAT_00858940;
extern int DAT_00787244;
extern int DAT_0076d22c;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x8c
        push    ebx
        push    esi
        push    edi
        mov     edi, ecx
        lea     eax, [edi + 0x1c]
        mov     dword ptr [ebp - 0x8], eax
        fld dword ptr [DAT_00787200]
        mov     esi, dword ptr [ebp - 0x8]
        fld     dword ptr [esi + 0xc]
        mov     ecx, dword ptr [esi + 0xc]
        fadd    st, st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0xc]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0xc]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     dword ptr [ebp - 0x4], ebx
        fld     dword ptr [esi]
        mov     ecx, dword ptr [esi]
        fadd    st, st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0xc]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0xc]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x4]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x4], ecx
        fld     dword ptr [esi + 0x4]
        mov     ecx, dword ptr [esi + 0x4]
        fadd    st, st(1)
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0xc]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0xc]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x4]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x4], ecx
        mov     ecx, dword ptr [esi + 0x8]
        fadd    dword ptr [esi + 0x8]
        rcl     ecx, 0x1
        sbb     eax, eax
        xor     eax, 0xffffffff
        fstp    dword ptr [ebp - 0xc]
        xor     ecx, ecx
        mov     ebx, dword ptr [ebp - 0xc]
        and     ebx, eax
        test    ebx, 0xff00
        seta    cl
        xor     eax, eax
        sub     eax, ecx
        or      ebx, eax
        and     ebx, 0xff
        mov     ecx, dword ptr [ebp - 0x4]
        shl     ecx, 0x8
        or      ecx, ebx
        mov     dword ptr [ebp - 0x4], ecx
        mov     ecx, dword ptr [edi + 0x14]
        mov     esi, dword ptr [ebp - 0x4]
        mov ebx, dword ptr [DAT_0076b420]
        push    ecx
        push    esi
        lea     edx, [ebp + 0xffffff74]
        push    0x787248
        push    edx
        call    ebx
        lea     eax, [ebp + 0xffffff74]
        push    eax
        call    FUN_00728fd0
        fild dword ptr [DAT_00858940]
        mov     ecx, dword ptr [ebp + 0x8]
        add     esp, 0x14
        fmul dword ptr [DAT_00787244]
        push    ecx
        call    FUN_0075db4a
        push    eax
        call    FUN_007275f0
        fld     dword ptr [edi + 0x18]
        sub     esp, 0x8
        fstp    qword ptr [esp]
        push    esi
        lea     edx, [ebp + 0xffffff74]
        push    0x787234
        push    edx
        call    ebx
        lea     eax, [ebp + 0xffffff74]
        push    eax
        call    FUN_00728fd0
        mov     ecx, dword ptr [edi + 0x3c]
        mov     edi, dword ptr [ecx]
        push    edi
        call    FUN_0050e1b0
        add     esp, 0x1c
        cmp     eax, -0x1
        jz      short done
        fild dword ptr [DAT_00858940]
        mov     edx, dword ptr [ebp + 0x8]
        push    edx
        fmul dword ptr [DAT_0076d22c]
        call    FUN_0075db4a
        push    eax
        call    FUN_007275f0
        push    edi
        call    FUN_0050e1b0
        push    eax
        push    esi
        lea     eax, [ebp + 0xffffff74]
        push    0x787224
        push    eax
        call    ebx
        lea     ecx, [ebp + 0xffffff74]
        push    ecx
        call    FUN_00728fd0
        add     esp, 0x18
done:
        pop     edi
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     4
    }


}
