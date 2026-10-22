/*
 * FUN_0054bd70 (444 B) — __thiscall method on a large object.
 * ECX = this pointer, double param on stack (RET 0x8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int DAT_007b8d88;
extern int DAT_007b8d8c;
extern int DAT_007b8d90;
extern int DAT_007b8cec;
extern int DAT_007b8ce8;
extern int DAT_007b8cf0;

__declspec(naked) void func_0054bd70(void)
{
    __asm {
        push    esi
        mov     esi, ecx

        mov     eax, dword ptr [esi + 0x78]
        lea     ecx, [esi + 0x78]
        call    dword ptr [eax + 4]

        fld     qword ptr [esp + 0x08]      /* param_2 (double) */
        fsub    qword ptr [esi + 0xE4]

        mov     ecx, dword ptr [esi + 0x3DC]
        test    ecx, ecx
        jle     L_0054BDA4

        fld     st(0)
        fmul    dword ptr [eax + 0x80]
        fadd    dword ptr [esi + 0x520]
        fstp    dword ptr [esi + 0x520]

L_0054BDA4:
        mov     ecx, dword ptr [esi + 0x3E0]
        test    ecx, ecx
        jle     L_0054BDC2

        fld     st(0)
        fmul    dword ptr [eax + 0x80]
        fsubr   dword ptr [esi + 0x520]
        fstp    dword ptr [esi + 0x520]

L_0054BDC2:
        mov     ecx, dword ptr [esi + 0x43C]
        test    ecx, ecx
        jle     L_0054BDDD

        fld     dword ptr [eax + 0x74]
        fmul    st(0), st(1)
        fadd    dword ptr [esi + 0x524]
        fstp    dword ptr [esi + 0x524]

L_0054BDDD:
        mov     ecx, dword ptr [esi + 0x440]
        test    ecx, ecx
        jle     L_0054BDF8

        fld     dword ptr [eax + 0x74]
        fmul    st(0), st(1)
        fsubr   dword ptr [esi + 0x524]
        fstp    dword ptr [esi + 0x524]

L_0054BDF8:
        mov     ecx, dword ptr [esi + 0x444]
        test    ecx, ecx
        jle     L_0054BE13

        fld     st(0)
        fmul    dword ptr [eax + 0x7C]
        fadd    dword ptr [esi + 0x51C]
        fstp    dword ptr [esi + 0x51C]

L_0054BE13:
        mov     ecx, dword ptr [esi + 0x448]
        test    ecx, ecx
        jle     L_0054BE2E

        fld     st(0)
        fmul    dword ptr [eax + 0x7C]
        fsubr   dword ptr [esi + 0x51C]
        fstp    dword ptr [esi + 0x51C]

L_0054BE2E:
        mov     ecx, dword ptr [esi + 0x450]
        test    ecx, ecx
        jle     L_0054BE49

        fld     st(0)
        fmul    dword ptr [eax + 0x78]
        fsubr   dword ptr [esi + 0x518]
        fstp    dword ptr [esi + 0x518]

L_0054BE49:
        mov     ecx, dword ptr [esi + 0x44C]
        test    ecx, ecx
        jle     L_0054BE64

        fld     st(0)
        fmul    dword ptr [eax + 0x78]
        fadd    dword ptr [esi + 0x518]
        fstp    dword ptr [esi + 0x518]

L_0054BE64:
        mov     ecx, dword ptr [esi + 0x42C]
        test    ecx, ecx
        jle     L_0054BE7F

        fld     dword ptr [eax + 0x74]
        fmul    st(0), st(1)
        fadd    dword ptr [esi + 0x528]
        fstp    dword ptr [esi + 0x528]

L_0054BE7F:
        mov     ecx, dword ptr [esi + 0x430]
        test    ecx, ecx
        jle     L_0054BE9A

        fld     dword ptr [eax + 0x74]
        fmul    st(0), st(1)
        fsubr   dword ptr [esi + 0x528]
        fstp    dword ptr [esi + 0x528]

L_0054BE9A:
        mov     ecx, dword ptr [esi + 0x454]
        test    ecx, ecx
        jle     L_0054BEB8

        fld     st(0)
        fmul    dword ptr [eax + 0x80]
        fadd    dword ptr [esi + 0x520]
        fstp    dword ptr [esi + 0x520]

L_0054BEB8:
        mov     ecx, dword ptr [esi + 0x458]
        test    ecx, ecx
        jle     L_0054BED6

        fmul    dword ptr [eax + 0x80]
        fsubr   dword ptr [esi + 0x520]
        fstp    dword ptr [esi + 0x520]
        jmp     L_0054BED8

L_0054BED6:
        fstp    st(0)

L_0054BED8:
        mov     eax, dword ptr [esi + 0x3E4]
        test    eax, eax
        jle     L_0054BF28

        mov     ecx, dword ptr [DAT_007b8d88]
        mov     edx, dword ptr [DAT_007b8d8c]
        mov     eax, dword ptr [DAT_007b8d90]
        mov     dword ptr [esi + 0x518], ecx
        mov     ecx, dword ptr [DAT_007b8cec]
        mov     dword ptr [esi + 0x51C], edx
        mov     edx, dword ptr [DAT_007b8ce8]
        mov     dword ptr [esi + 0x520], eax
        mov     eax, dword ptr [DAT_007b8cf0]
        mov     dword ptr [esi + 0x528], ecx
        mov     dword ptr [esi + 0x524], edx
        mov     dword ptr [esi + 0x52C], eax

L_0054BF28:
        pop     esi
        ret     0x8
    }
}
