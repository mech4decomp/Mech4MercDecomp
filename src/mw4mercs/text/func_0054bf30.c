/*
 * FUN_0054bf30 (1431 B) — __thiscall method on a large object.
 * ECX = this pointer, double param on stack (RET 0x8).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float DAT_0077d048;
extern float DAT_0076d070;
extern float DAT_007748c8;
extern float DAT_0076d5f0;
extern float DAT_0077d044;
extern float DAT_0077d030;
extern float DAT_0077d040;
extern float DAT_007b8d90;
extern int   DAT_007b8d88;
extern int   DAT_007b8d8c;
extern double DAT_0077d038;
extern float DAT_00770168;

extern void __cdecl FUN_0041a070(void);
extern void __cdecl FUN_0041c7d0(void);

__declspec(naked) void func_0054bf30(void)
{
    __asm {
        sub     esp, 0x48
        fld     qword ptr [esp + 0x4C]
        push    ebx
        mov     ebx, ecx
        fsub    qword ptr [ebx + 0xE4]
        mov     eax, dword ptr [ebx + 0x78]
        lea     ecx, [ebx + 0x78]
        push    ebp
        fstp    dword ptr [esp + 0x54]
        call    dword ptr [eax + 4]
        mov     ebp, eax

        mov     eax, dword ptr [ebx + 0x444]
        test    eax, eax
        mov     ecx, 0x41A00000
        jle     L_0054BFCE

        mov     eax, dword ptr [ebx + 0x564]
        sub     eax, 4
        jz      L_0054BFA2
        dec     eax
        fld     dword ptr [esp + 0x54]
        jz      L_0054BF82

        fmul    dword ptr [ebp + 0x7C]
        fadd    dword ptr [ebx + 0x51C]
        fstp    dword ptr [ebx + 0x51C]
        jmp     L_0054BFCE

L_0054BF82:
        fmul    dword ptr [ebp + 0x80]
        fmul    dword ptr [ebx + 0x51C]
        fmul    dword ptr [DAT_0077d048]
        fadd    dword ptr [ebx + 0x520]
        fstp    dword ptr [ebx + 0x520]
        jmp     L_0054BFCE

L_0054BFA2:
        fld     dword ptr [esp + 0x54]
        fmul    dword ptr [ebp + 0x7C]
        fmul    dword ptr [DAT_0076d070]
        fadd    dword ptr [ebx + 0x51C]
        fst     dword ptr [ebx + 0x51C]
        fcomp   dword ptr [DAT_007748c8]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0054BFCE
        mov     dword ptr [ebx + 0x51C], ecx

L_0054BFCE:
        mov     eax, dword ptr [ebx + 0x448]
        test    eax, eax
        mov     edx, 0x40000000
        jle     L_0054C04C

        mov     eax, dword ptr [ebx + 0x564]
        sub     eax, 4
        jz      L_0054C020
        dec     eax
        fld     dword ptr [esp + 0x54]
        jz      L_0054C000

        fmul    dword ptr [ebp + 0x7C]
        fsubr   dword ptr [ebx + 0x51C]
        fstp    dword ptr [ebx + 0x51C]
        jmp     L_0054C04C

L_0054C000:
        fmul    dword ptr [ebp + 0x80]
        fmul    dword ptr [ebx + 0x51C]
        fmul    dword ptr [DAT_0077d048]
        fsubr   dword ptr [ebx + 0x520]
        fstp    dword ptr [ebx + 0x520]
        jmp     L_0054C04C

L_0054C020:
        fld     dword ptr [esp + 0x54]
        fmul    dword ptr [ebp + 0x7C]
        fmul    dword ptr [DAT_0076d070]
        fsubr   dword ptr [ebx + 0x51C]
        fst     dword ptr [ebx + 0x51C]
        fcomp   dword ptr [DAT_0076d5f0]
        fnstsw  ax
        test    ah, 0x01
        jz      L_0054C04C
        mov     dword ptr [ebx + 0x51C], edx

L_0054C04C:
        mov     eax, dword ptr [ebx + 0x43C]
        test    eax, eax
        jle     L_0054C0EE

        mov     eax, dword ptr [ebx + 0x564]
        sub     eax, 0
        jz      L_0054C0DB
        sub     eax, 4
        jz      L_0054C09D
        dec     eax
        jz      L_0054C07C

        fld     dword ptr [ebp + 0x74]
        fmul    dword ptr [esp + 0x54]
        fsubr   dword ptr [ebx + 0x524]
        jmp     L_0054C0E8

L_0054C07C:
        fld     dword ptr [esp + 0x54]
        fmul    dword ptr [ebp + 0x78]
        fmul    dword ptr [ebx + 0x51C]
        fmul    dword ptr [DAT_0077d048]
        fsubr   dword ptr [ebx + 0x518]
        fstp    dword ptr [ebx + 0x518]
        jmp     L_0054C0EE

L_0054C09D:
        fld     dword ptr [esp + 0x54]
        fmul    dword ptr [ebp + 0x78]
        fmul    dword ptr [ebx + 0x51C]
        fmul    dword ptr [DAT_0077d048]
        fmul    dword ptr [DAT_0076d070]
        fsubr   dword ptr [ebx + 0x518]
        fst     dword ptr [ebx + 0x518]
        fcomp   dword ptr [DAT_0077d044]
        fnstsw  ax
        test    ah, 0x01
        jz      L_0054C0EE
        mov     dword ptr [ebx + 0x518], 0xC1A00000
        jmp     L_0054C0EE

L_0054C0DB:
        fld     dword ptr [ebp + 0x74]
        fmul    dword ptr [esp + 0x54]
        fadd    dword ptr [ebx + 0x524]

L_0054C0E8:
        fstp    dword ptr [ebx + 0x524]

L_0054C0EE:
        mov     eax, dword ptr [ebx + 0x440]
        test    eax, eax
        jle     L_0054C18C

        mov     eax, dword ptr [ebx + 0x564]
        sub     eax, 0
        jz      L_0054C179
        sub     eax, 4
        jz      L_0054C13F
        dec     eax
        jz      L_0054C11E

        fld     dword ptr [ebp + 0x74]
        fmul    dword ptr [esp + 0x54]
        fadd    dword ptr [ebx + 0x524]
        jmp     L_0054C186

L_0054C11E:
        fld     dword ptr [esp + 0x54]
        fmul    dword ptr [ebp + 0x78]
        fmul    dword ptr [ebx + 0x51C]
        fmul    dword ptr [DAT_0077d048]
        fadd    dword ptr [ebx + 0x518]
        fstp    dword ptr [ebx + 0x518]
        jmp     L_0054C18C

L_0054C13F:
        fld     dword ptr [esp + 0x54]
        fmul    dword ptr [ebp + 0x78]
        fmul    dword ptr [ebx + 0x51C]
        fmul    dword ptr [DAT_0077d048]
        fmul    dword ptr [DAT_0076d070]
        fadd    dword ptr [ebx + 0x518]
        fst     dword ptr [ebx + 0x518]
        fcomp   dword ptr [DAT_007748c8]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0054C18C
        mov     dword ptr [ebx + 0x518], ecx
        jmp     L_0054C18C

L_0054C179:
        fld     dword ptr [ebp + 0x74]
        fmul    dword ptr [esp + 0x54]
        fsubr   dword ptr [ebx + 0x524]

L_0054C186:
        fstp    dword ptr [ebx + 0x524]

L_0054C18C:
        mov     eax, dword ptr [ebx + 0x454]
        test    eax, eax
        push    esi
        push    edi
        jle     L_0054C2C4

        mov     eax, dword ptr [ebx + 0x564]
        sub     eax, 2
        jz      L_0054C235
        sub     eax, 2
        jz      L_0054C1FD
        dec     eax
        fld     dword ptr [esp + 0x5C]
        jz      L_0054C1E9

        fmul    dword ptr [ebp + 0x80]
        fadd    dword ptr [ebx + 0x520]
        fst     dword ptr [ebx + 0x520]
        fcomp   dword ptr [DAT_0077d030]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0054C2C4
        mov     dword ptr [ebx + 0x520], 0x43160000
        jmp     L_0054C2C4

L_0054C1E9:
        fmul    dword ptr [ebp + 0x7C]
        fsubr   dword ptr [ebx + 0x51C]
        fstp    dword ptr [ebx + 0x51C]
        jmp     L_0054C2C4

L_0054C1FD:
        fld     dword ptr [esp + 0x5C]
        fmul    dword ptr [ebp + 0x80]
        fmul    dword ptr [DAT_0076d070]
        fsubr   dword ptr [ebx + 0x520]
        fst     dword ptr [ebx + 0x520]
        fcomp   dword ptr [DAT_0076d5f0]
        fnstsw  ax
        test    ah, 0x01
        jz      L_0054C2C4
        mov     dword ptr [ebx + 0x520], edx
        jmp     L_0054C2C4

L_0054C235:
        fld     dword ptr [DAT_007b8d90]

        mov     ecx, dword ptr [DAT_007b8d88]

        fld     dword ptr [esp + 0x5C]

        mov     edx, dword ptr [DAT_007b8d8c]

        fmul    dword ptr [ebp + 0x80]

        mov     dword ptr [esp + 0x10], ecx
        mov     ecx, 0x0C
        mov     esi, 0x7B9460
        fadd    st(0), st(1)
        lea     edi, [esp + 0x28]
        lea     eax, [ebx + 0x524]
        fstp    dword ptr [esp + 0x18]
        rep movsd
        fstp    st(0)
        push    eax
        lea     ecx, [esp + 0x2C]
        mov     dword ptr [esp + 0x18], edx
        call    FUN_0041a070

        lea     ecx, [esp + 0x28]
        push    ecx
        lea     edx, [esp + 0x14]
        push    edx
        lea     ecx, [esp + 0x24]
        call    FUN_0041c7d0

        fld     dword ptr [esp + 0x1C]
        fadd    dword ptr [ebx + 0x518]
        fstp    dword ptr [ebx + 0x518]
        fld     dword ptr [esp + 0x20]
        fadd    dword ptr [ebx + 0x51C]
        fstp    dword ptr [ebx + 0x51C]
        fld     dword ptr [esp + 0x24]
        fadd    dword ptr [ebx + 0x520]
        fstp    dword ptr [ebx + 0x520]

L_0054C2C4:
        mov     eax, dword ptr [ebx + 0x458]
        test    eax, eax
        jle     L_0054C3D8

        mov     eax, dword ptr [ebx + 0x564]
        sub     eax, 2
        jz      L_0054C34A
        sub     eax, 2
        jz      L_0054C30E
        dec     eax
        fld     dword ptr [esp + 0x5C]
        jz      L_0054C2FA

        fmul    dword ptr [ebp + 0x80]
        fsubr   dword ptr [ebx + 0x520]
        jmp     L_0054C3D2

L_0054C2FA:
        fmul    dword ptr [ebp + 0x7C]
        fadd    dword ptr [ebx + 0x51C]
        fstp    dword ptr [ebx + 0x51C]
        jmp     L_0054C3D8

L_0054C30E:
        fld     dword ptr [esp + 0x5C]
        fmul    dword ptr [ebp + 0x80]
        fmul    dword ptr [DAT_0076d070]
        fadd    dword ptr [ebx + 0x520]
        fst     dword ptr [ebx + 0x520]
        fcomp   dword ptr [DAT_0077d040]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0054C3D8
        mov     dword ptr [ebx + 0x520], 0x42200000
        jmp     L_0054C3D8

L_0054C34A:
        fld     dword ptr [DAT_007b8d90]

        mov     ecx, dword ptr [DAT_007b8d8c]

        fld     dword ptr [esp + 0x5C]

        mov     eax, dword ptr [DAT_007b8d88]

        fmul    dword ptr [ebp + 0x80]

        mov     dword ptr [esp + 0x20], ecx
        mov     ecx, 0x0C
        mov     esi, 0x7B9460
        fsubr   st(0), st(1)
        lea     edi, [esp + 0x28]
        lea     edx, [ebx + 0x524]
        fstp    dword ptr [esp + 0x24]
        rep movsd
        fstp    st(0)
        push    edx
        lea     ecx, [esp + 0x2C]
        mov     dword ptr [esp + 0x20], eax
        call    FUN_0041a070

        lea     eax, [esp + 0x28]
        push    eax
        lea     ecx, [esp + 0x20]
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_0041c7d0

        fld     dword ptr [esp + 0x10]
        fadd    dword ptr [ebx + 0x518]
        fstp    dword ptr [ebx + 0x518]
        fld     dword ptr [esp + 0x14]
        fadd    dword ptr [ebx + 0x51C]
        fstp    dword ptr [ebx + 0x51C]
        fld     dword ptr [esp + 0x18]
        fadd    dword ptr [ebx + 0x520]

L_0054C3D2:
        fstp    dword ptr [ebx + 0x520]

L_0054C3D8:
        mov     al, byte ptr [ebx + 0x5AC]
        test    al, al
        pop     edi
        pop     esi
        jz      L_0054C4BF

        cmp     dword ptr [ebx + 0x5B8], 1
        jnz     L_0054C4BF

        fld     dword ptr [ebp + 0x74]
        fmul    dword ptr [ebx + 0x2D8]
        fmul    dword ptr [esp + 0x54]
        fadd    dword ptr [ebx + 0x524]
        fstp    dword ptr [ebx + 0x524]

        fld     dword ptr [ebx + 0x2DC]
        fmul    dword ptr [ebp + 0x7C]
        fmul    dword ptr [esp + 0x54]
        fadd    dword ptr [ebx + 0x51C]
        fst     dword ptr [ebx + 0x51C]

        fld     dword ptr [ebx + 0x2D4]
        fabs
        fcomp   qword ptr [DAT_0077d038]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0054C464

        mov     al, byte ptr [ebx + 0x428]
        fld     dword ptr [ebx + 0x2D4]
        test    al, al
        jz      L_0054C44E
        fchs

L_0054C44E:
        fmul    dword ptr [ebp + 0x80]
        fmul    dword ptr [esp + 0x54]
        fsubr   dword ptr [ebx + 0x520]
        fstp    dword ptr [ebx + 0x520]

L_0054C464:
        fld     dword ptr [ebx + 0x520]
        fcomp   dword ptr [DAT_00770168]
        fnstsw  ax
        test    ah, 0x01
        jz      L_0054C481
        mov     dword ptr [ebx + 0x520], 0x41200000

L_0054C481:
        fld     dword ptr [ebx + 0x520]
        fcomp   dword ptr [DAT_0077d030]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0054C49E
        mov     dword ptr [ebx + 0x520], 0x43160000

L_0054C49E:
        fld     dword ptr [ebx + 0x520]
        fadd    st(0), st(0)
        fstp    dword ptr [esp + 0x54]
        fcomp   dword ptr [esp + 0x54]
        fnstsw  ax
        test    ah, 0x41
        jnz     L_0054C4BF
        mov     edx, dword ptr [esp + 0x54]
        mov     dword ptr [ebx + 0x51C], edx

L_0054C4BF:
        pop     ebp
        pop     ebx
        add     esp, 0x48
        ret     0x8
    }
}
