/*
 * FUN_005ee820 (1076 B) — __thiscall method (ECX = this), RET.
 *
 * Object registration: allocates a series of objects and registers them
 * on the object at [0x007f25a8]+0x74.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_004084d0(void);
extern void __stdcall FUN_00501a20(void);
extern void __stdcall FUN_005008e0(void);
extern void __stdcall FUN_00500ec0(void);

__declspec(naked) void __stdcall FUN_005ee820(void)
{
    

extern int DAT_007f25b0;
extern int DAT_007f25b4;
extern int DAT_007f25a8;
__asm {
push    esi
        push    0xa8
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      LE888
        mov eax, dword ptr [DAT_007f25b0]
        mov ecx, dword ptr [DAT_007f25b4]
        push    0x502c60
        push    0x5028b0
        push    0x674df0
        push    0x0
        push    0x674dd0
        push    eax
        push    0x674b00
        push    0x5eec90
        push    0x0
        push    0x0
        push    ecx
        push    0x789eac
        push    0x436
        mov     ecx, esi
        call    FUN_00501a20
        mov     dword ptr [esi + 0xa4], 0x5ef970
        mov dword ptr [DAT_007f25a8], esi
        jmp     LE892
LE888:
        mov dword ptr [DAT_007f25a8], 0x0
LE892:
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      LE8BF
        push    0x34
        push    0x231
        push    0x789e98
        push    0xb
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x773cd0
        jmp     LE8C1
LE8BF:
        xor     esi, esi
LE8C1:
        mov edx, dword ptr [DAT_007f25a8]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      LE8FD
        push    0x38
        push    0x231
        push    0x789e84
        push    0xc
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x773cd0
        jmp     LE8FF
LE8FD:
        xor     esi, esi
LE8FF:
        mov eax, dword ptr [DAT_007f25a8]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      LE937
        push    0x3c
        push    0x2
        push    0x789e7c
        push    0xd
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     LE939
LE937:
        xor     esi, esi
LE939:
        mov ecx, dword ptr [DAT_007f25a8]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      LE972
        push    0x40
        push    0x2
        push    0x789e6c
        push    0xe
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     LE974
LE972:
        xor     esi, esi
LE974:
        mov edx, dword ptr [DAT_007f25a8]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      LE9AD
        push    0x44
        push    0x1
        push    0x789e64
        push    0xf
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775588
        jmp     LE9AF
LE9AD:
        xor     esi, esi
LE9AF:
        mov eax, dword ptr [DAT_007f25a8]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      LE9E7
        push    0x4c
        push    0x1
        push    0x789e58
        push    0x10
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775588
        jmp     LE9E9
LE9E7:
        xor     esi, esi
LE9E9:
        mov ecx, dword ptr [DAT_007f25a8]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      LEA22
        push    0x50
        push    0x2
        push    0x789e4c
        push    0x11
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     LEA24
LEA22:
        xor     esi, esi
LEA24:
        mov edx, dword ptr [DAT_007f25a8]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      LEA5D
        push    0x5c
        push    0x2
        push    0x789e3c
        push    0x12
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     LEA5F
LEA5D:
        xor     esi, esi
LEA5F:
        mov eax, dword ptr [DAT_007f25a8]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      LEA97
        push    0x60
        push    0x2
        push    0x789e1c
        push    0x13
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     LEA99
LEA97:
        xor     esi, esi
LEA99:
        mov ecx, dword ptr [DAT_007f25a8]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      LEAD2
        push    0x64
        push    0x2
        push    0x789df8
        push    0x14
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     LEAD4
LEAD2:
        xor     esi, esi
LEAD4:
        mov edx, dword ptr [DAT_007f25a8]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      LEB0D
        push    0x68
        push    0x2
        push    0x789dd4
        push    0x15
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     LEB0F
LEB0D:
        xor     esi, esi
LEB0F:
        mov eax, dword ptr [DAT_007f25a8]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      LEB47
        push    0x54
        push    0x2
        push    0x7852c8
        push    0x16
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     LEB49
LEB47:
        xor     esi, esi
LEB49:
        mov ecx, dword ptr [DAT_007f25a8]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      LEB82
        push    0x58
        push    0x2
        push    0x789ce4
        push    0x17
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     LEB84
LEB82:
        xor     esi, esi
LEB84:
        mov edx, dword ptr [DAT_007f25a8]
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      LEBBD
        push    0x6c
        push    0x2
        push    0x789dc8
        push    0x18
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     LEBBF
LEBBD:
        xor     esi, esi
LEBBF:
        mov eax, dword ptr [DAT_007f25a8]
        push    esi
        lea     ecx, [eax + 0x74]
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      LEBF7
        push    0x70
        push    0x2
        push    0x789c94
        push    0x19
        mov     ecx, esi
        call    FUN_005008e0
        mov     dword ptr [esi], 0x775948
        jmp     LEBF9
LEBF7:
        xor     esi, esi
LEBF9:
        mov ecx, dword ptr [DAT_007f25a8]
        push    esi
        add     ecx, 0x74
        call    FUN_00500ec0
        push    0x20
        call    FUN_004084d0
        mov     esi, eax
        add     esp, 0x4
        test    esi, esi
        jz      LEEC41
        push    0x48
        push    0x1
        push    0x789dc0
        push    0x1a
        mov     ecx, esi
        call    FUN_005008e0
        mov edx, dword ptr [DAT_007f25a8]
        push    esi
        lea     ecx, [edx + 0x74]
        mov     dword ptr [esi], 0x775588
        call    FUN_00500ec0
        pop     esi
        ret
LEEC41:
        mov edx, dword ptr [DAT_007f25a8]
        xor     esi, esi
        push    esi
        lea     ecx, [edx + 0x74]
        call    FUN_00500ec0
        pop     esi
        ret
    }


}
