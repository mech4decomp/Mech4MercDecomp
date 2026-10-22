/*
 * FUN_004deac0 (1775 B) — MLR/Adept application-core update/input handler.
 * __thiscall (ECX = this). Builds a capability bitmask, evaluates a set of
 * float thresholds (FPU), dispatches a mapping-group command via a jump
 * table (0x4df1b0), and walks a linked list of input bindings.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_00723b40(void);
extern void __cdecl FUN_00506140(void);
extern void __cdecl FUN_00505e10(void);
extern void __cdecl FUN_00723180(void);
extern void __cdecl FUN_004dd8b0(void);
extern void __cdecl FUN_00723bd0(void);
extern void __cdecl FUN_0041fd80(void);
extern void __cdecl FUN_004df2a0(void);

extern float g_0076df00;
extern float g_0076d070;
extern float g_0076d3c8;
extern float g_0076e22c;
extern float g_0076d598;
extern float g_00773954;
extern float g_00773950;
extern float g_0077394c;
extern float g_00773948;

extern int g_007dab44;
extern int g_007dab40;
extern int g_jt_4df1b0[];   /* jump table @ 0x4df1b0 */

__declspec(naked) void FUN_004deac0(void)
{
    __asm {
        sub     esp, 0x34
        push    ebx
        push    ebp
        push    esi
        mov     esi, ecx
        mov     al, byte ptr [esi + 0x2d]
        test    al, al
        push    edi
        jnz     LDF1A7
        push    0x10
        mov     byte ptr [esp + 0x16], 0x0
        mov     byte ptr [esp + 0x17], 0x0
        mov     byte ptr [esp + 0x18], 0x0
        mov     byte ptr [esp + 0x19], 0x0
        mov     byte ptr [esp + 0x1a], 0x0
        mov     byte ptr [esp + 0x1b], 0x0
        mov     byte ptr [esp + 0x1c], 0x0
        mov     byte ptr [esp + 0x1d], 0x0
        mov     byte ptr [esp + 0x1e], 0x0
        mov     byte ptr [esp + 0x1f], 0x0
        mov     byte ptr [esp + 0x20], 0x0
        mov     byte ptr [esp + 0x21], 0x0
        mov     byte ptr [esp + 0x22], 0x0
        mov     byte ptr [esp + 0x23], 0x0
        mov     byte ptr [esp + 0x24], 0x0
        mov     byte ptr [esp + 0x25], 0x0
        mov     byte ptr [esp + 0x26], 0x0
        mov     byte ptr [esp + 0x27], 0x0
        xor     ebx, ebx
        call    FUN_00723b40
        test    eax, eax
        jz      LEB40
        mov     ebx, 0x1
LEB40:
        push    0x11
        call    FUN_00723b40
        test    eax, eax
        jz      LEB4E
        or      ebx, 0x2
LEB4E:
        push    0x12
        call    FUN_00723b40
        test    eax, eax
        jz      LEB5C
        or      ebx, 0x4
LEB5C:
        mov     edi, dword ptr [esi + 0x34]
        test    edi, edi
        jz      LECE5
        mov     ebp, ebx
        mov     ecx, edi
        and     ebp, 0x1
        call    FUN_00506140
        test    al, al
        jz      LEB7A
        or      ebp, 0x1
LEB7A:
        mov     edx, dword ptr [esi + 0x3c]
        mov     ecx, ebp
        mov     eax, 0x1
        shl     eax, cl
        mov     ecx, dword ptr [esi + 0x40]
        push    ecx
        mov     ecx, dword ptr [esi + 0x38]
        push    edx
        push    ecx
        push    eax
        mov     ecx, edi
        mov     dword ptr [esi + 0x3b70], eax
        call    FUN_00505e10
        mov     eax, dword ptr [edi + 0x24]
        test    eax, eax
        jz      LEBD0
        fld     dword ptr [edi + 0x4]
        fcomp   dword ptr [g_0076df00]
        /* __emit: fnstsw ax no-WAIT (DF E0); MSVC6 inserts 9B WAIT prefix */
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x1
        jz      LEBBB
        mov     byte ptr [esp + 0x18], 0x1
        jmp     LEBD0
LEBBB:
        fld     dword ptr [edi + 0x4]
        fcomp   dword ptr [g_0076d070]
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x41
        jnz     LEBD0
        mov     byte ptr [esp + 0x19], 0x1
LEBD0:
        mov     eax, dword ptr [edi + 0x28]
        test    eax, eax
        jz      LEC03
        fld     dword ptr [edi + 0x8]
        fcomp   dword ptr [g_0076df00]
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x1
        jz      LEBEE
        mov     byte ptr [esp + 0x1a], 0x1
        jmp     LEC03
LEBEE:
        fld     dword ptr [edi + 0x8]
        fcomp   dword ptr [g_0076d070]
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x41
        jnz     LEC03
        mov     byte ptr [esp + 0x1b], 0x1
LEC03:
        mov     eax, dword ptr [edi + 0x2c]
        test    eax, eax
        jz      LEC36
        fld     dword ptr [edi + 0xc]
        fcomp   dword ptr [g_0076d3c8]
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x1
        jz      LEC21
        mov     byte ptr [esp + 0x1e], 0x1
        jmp     LEC36
LEC21:
        fld     dword ptr [edi + 0xc]
        fcomp   dword ptr [g_0076e22c]
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x41
        jnz     LEC36
        mov     byte ptr [esp + 0x1f], 0x1
LEC36:
        mov     eax, dword ptr [edi + 0x30]
        test    eax, eax
        jz      LEC69
        fld     dword ptr [edi + 0x10]
        fcomp   dword ptr [g_0076df00]
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x1
        jz      LEC54
        mov     byte ptr [esp + 0x1c], 0x1
        jmp     LEC69
LEC54:
        fld     dword ptr [edi + 0x10]
        fcomp   dword ptr [g_0076d070]
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x41
        jnz     LEC69
        mov     byte ptr [esp + 0x1d], 0x1
LEC69:
        cmp     dword ptr [edi + 0x20], 0x1
        jnz     LECE5
        mov     edx, dword ptr [edi + 0x18]
        mov     dword ptr [esp + 0x24], edx
        fld     dword ptr [esp + 0x24]
        fcomp   dword ptr [g_0076d598]
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x40
        jnz     LECE5
        fld     dword ptr [esp + 0x24]
        fcomp   dword ptr [g_00773954]
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x41
        jz      LECE0
        fld     dword ptr [esp + 0x24]
        fcomp   dword ptr [g_00773950]
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x1
        jnz     LECE0
        fld     dword ptr [esp + 0x24]
        fcomp   dword ptr [g_0077394c]
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x41
        jz      LECC1
        mov     byte ptr [esp + 0x21], 0x1
        jmp     LECE5
LECC1:
        fld     dword ptr [esp + 0x24]
        fcomp   dword ptr [g_00773948]
        __emit 0xDF
        __emit 0xE0
        test    ah, 0x1
        jz      LECD9
        mov     byte ptr [esp + 0x23], 0x1
        jmp     LECE5
LECD9:
        mov     byte ptr [esp + 0x20], 0x1
        jmp     LECE5
LECE0:
        mov     byte ptr [esp + 0x22], 0x1
LECE5:
        mov     ecx, ebx
        and     ecx, 0x1
        mov     eax, 0x1
        shl     eax, cl
        lea     ecx, [esp + 0x28]
        push    ecx
        lea     edx, [esp + 0x34]
        push    edx
        mov     dword ptr [esi + 0x3b70], eax
        lea     eax, [esp + 0x48]
        push    eax
        lea     ecx, [esp + 0x48]
        push    ecx
        lea     edx, [esp + 0x48]
        push    edx
        lea     eax, [esp + 0x48]
        push    eax
        call    FUN_00723180
        mov     eax, dword ptr [esp + 0x3c]
        cmp     eax, -0x19
        jge     LED2A
        mov     byte ptr [esp + 0x14], 0x1
        jmp     LED34
LED2A:
        cmp     eax, 0x19
        jle     LED34
        mov     byte ptr [esp + 0x15], 0x1
LED34:
        mov     eax, dword ptr [esp + 0x40]
        cmp     eax, -0x19
        jge     LED44
        mov     byte ptr [esp + 0x16], 0x1
        jmp     LED4E
LED44:
        cmp     eax, 0x19
        jle     LED4E
        mov     byte ptr [esp + 0x17], 0x1
LED4E:
        mov     edx, dword ptr [esp + 0x34]
        push    0x1
        lea     eax, [esp + 0x38]
        lea     ecx, [esi + 0x44]
        push    eax
        mov     dword ptr [ecx + 0x18], edx
        call    FUN_004dd8b0
        mov     edx, dword ptr [esp + 0x38]
        push    0x1
        lea     eax, [esp + 0x3c]
        lea     ecx, [esi + 0x60]
        push    eax
        mov     dword ptr [ecx + 0x18], edx
        call    FUN_004dd8b0
        fild    dword ptr [esp + 0x3c]
        push    0x1
        lea     edx, [esp + 0x30]
        lea     ecx, [esi + 0x7c]
        fst     dword ptr [esp + 0x30]
        push    edx
        fstp    dword ptr [ecx + 0x18]
        call    FUN_004dd8b0
        fild    dword ptr [esp + 0x40]
        push    0x1
        lea     eax, [esp + 0x30]
        lea     ecx, [esi + 0x98]
        fst     dword ptr [esp + 0x30]
        push    eax
        fstp    dword ptr [ecx + 0x18]
        call    FUN_004dd8b0
        mov     eax, dword ptr [esp + 0x30]
        cmp     eax, 0x3e7
        jnz     LEDC6
        mov     dword ptr [esp + 0x30], 0x0
        jmp     LEDD8
LEDC6:
        test    eax, eax
        jge     LEDD1
        mov     byte ptr [esp + 0x13], 0x1
        jmp     LEDD8
LEDD1:
        jle     LEDD8
        mov     byte ptr [esp + 0x12], 0x1
LEDD8:
        mov     edx, dword ptr [esi + 0xb4]
        lea     ecx, [esi + 0xb4]
        push    0x1
        lea     eax, [esp + 0x34]
        push    eax
        call    dword ptr [edx + 0xc]
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esi + 0xd0]
        and     cl, 0x1
        neg     cl
        push    0x1
        lea     eax, [esp + 0x28]
        push    eax
        sbb     ecx, ecx
        and     ecx, 0x2
        dec     ecx
        mov     dword ptr [esp + 0x2c], ecx
        lea     ecx, [esi + 0xd0]
        call    dword ptr [edx + 0xc]
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esi + 0xec]
        and     cl, 0x2
        neg     cl
        push    0x1
        lea     eax, [esp + 0x28]
        push    eax
        sbb     ecx, ecx
        and     ecx, 0x2
        dec     ecx
        mov     dword ptr [esp + 0x2c], ecx
        lea     ecx, [esi + 0xec]
        call    dword ptr [edx + 0xc]
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esi + 0x108]
        and     cl, 0x4
        neg     cl
        push    0x1
        lea     eax, [esp + 0x28]
        push    eax
        sbb     ecx, ecx
        and     ecx, 0x2
        dec     ecx
        mov     dword ptr [esp + 0x2c], ecx
        lea     ecx, [esi + 0x108]
        call    dword ptr [edx + 0xc]
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esi + 0x124]
        and     cl, 0x8
        neg     cl
        push    0x1
        lea     eax, [esp + 0x28]
        push    eax
        sbb     ecx, ecx
        and     ecx, 0x2
        dec     ecx
        mov     dword ptr [esp + 0x2c], ecx
        lea     ecx, [esi + 0x124]
        call    dword ptr [edx + 0xc]
        mov     ecx, dword ptr [esp + 0x28]
        mov     edx, dword ptr [esi + 0x140]
        and     cl, 0x10
        neg     cl
        push    0x1
        lea     eax, [esp + 0x28]
        push    eax
        sbb     ecx, ecx
        and     ecx, 0x2
        dec     ecx
        mov     dword ptr [esp + 0x2c], ecx
        lea     ecx, [esi + 0x140]
        call    dword ptr [edx + 0xc]
        mov     al, byte ptr [esi + 0x3b75]
        mov     edx, 0x1
        mov     ecx, ebx
        shl     edx, cl
        test    al, al
        mov     dword ptr [esi + 0x3b70], edx
        jnz     LDF154
        mov     eax, dword ptr [g_007dab44]
        mov     ecx, dword ptr [eax]
        xor     ecx, dword ptr [g_007dab40]
        mov     edx, dword ptr [ecx + 0xc]
        xor     edx, 0x85739531
        mov     eax, dword ptr [edx + 0x5c]
        test    eax, eax
        jnz     LDF1A7
        mov     ebp, dword ptr [esi + 0x3b80]
        mov     bl, byte ptr [esp + 0x12]
        test    ebp, ebp
        jz      LDF11A
LDF03:
        mov     edi, dword ptr [ebp]
        test    edi, edi
        mov     ebp, dword ptr [ebp + 0x4]
        jz      LDF11A
        mov     al, byte ptr [esi + 0x3b75]
        test    al, al
        jnz     LDF11A
        mov     al, byte ptr [esi + 0x2c]
        test    al, al
        jnz     LDF10E
        mov     ecx, edi
        sub     ecx, esi
        sub     ecx, 0x15c
        mov     eax, 0x92492493
        imul    ecx
        add     edx, ecx
        sar     edx, 0x4
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        lea     eax, [edx + 0xfffffe00]
        cmp     eax, 0x11
        mov     dword ptr [esp + 0x28], edx
        ja      LDF070
        jmp     dword ptr [eax*4 + g_jt_4df1b0]
LDF069:
        test    bl, bl
        jnz     LDF0D0
        jmp     LDF07E
LDF076:
        mov     al, byte ptr [esp + 0x13]
        test    al, al
        jnz     LDF0D0
        jmp     LDF07E
LDF087:
        mov     al, byte ptr [esp + 0x14]
        test    al, al
        jnz     LDF0D0
        jmp     LDF07E
LDF098:
        mov     al, byte ptr [esp + 0x15]
        test    al, al
        jnz     LDF0D0
        jmp     LDF07E
LDF0A9:
        mov     al, byte ptr [esp + 0x16]
        test    al, al
        jnz     LDF0D0
        jmp     LDF07E
LDF0BA:
        mov     al, byte ptr [esp + 0x17]
        test    al, al
        jnz     LDF0D0
        jmp     LDF07E
LDF0CB:
        mov     al, byte ptr [esp + 0x18]
        test    al, al
        jnz     LDF0D0
        jmp     LDF07E
LDF0DC:
        mov     al, byte ptr [esp + 0x19]
        test    al, al
        jnz     LDF0D0
        jmp     LDF07E
LDF0ED:
        mov     al, byte ptr [esp + 0x1a]
        test    al, al
        jnz     LDF0D0
        jmp     LDF07E
LDF0FE:
        mov     al, byte ptr [esp + 0x1b]
        test    al, al
        jnz     LDF0D0
        jmp     LDF07E
LDF00C:
        mov     al, byte ptr [esp + 0x1c]
        test    al, al
        jnz     LDF0D0
        jmp     LDF07E
LDF01A:
        mov     al, byte ptr [esp + 0x1d]
        test    al, al
        jnz     LDF0D0
        jmp     LDF07E
LDF028:
        mov     al, byte ptr [esp + 0x1e]
        test    al, al
        jnz     LDF0D0
        jmp     LDF07E
LDF036:
        mov     al, byte ptr [esp + 0x1f]
        test    al, al
        jnz     LDF0D0
        jmp     LDF07E
LDF044:
        mov     al, byte ptr [esp + 0x20]
        test    al, al
        jnz     LDF0D0
        jmp     LDF07E
LDF052:
        mov     al, byte ptr [esp + 0x21]
        test    al, al
        jnz     LDF0D0
        jmp     LDF07E
LDF05C:
        mov     al, byte ptr [esp + 0x22]
        test    al, al
        jnz     LDF0D0
        jmp     LDF07E
LDF066:
        mov     al, byte ptr [esp + 0x23]
        test    al, al
        jnz     LDF0D0
        jmp     LDF07E
LDF070:
        push    edx
        call    FUN_00723b40
        test    eax, eax
        mov     edx, dword ptr [esp + 0x28]
        jnz     LDF0D0
LDF07E:
        mov     al, byte ptr [esi + 0x3b76]
        test    al, al
        jz      LDF099
        cmp     edx, 0xd
        jnz     LDF099
        mov     byte ptr [esi + 0x3b76], 0x0
        /* __emit: backward jmp rel32 miscomputed by MSVC6 (off-by-8, call-reloc between branch and target) */
        __emit 0xE9
        __emit 0x6A
        __emit 0xFE
        __emit 0xFF
        __emit 0xFF
LDF099:
        mov     al, byte ptr [esi + 0x3b77]
        test    al, al
        jz      LDF0B4
        cmp     edx, 0x1b
        jnz     LDF0B4
        mov     byte ptr [esi + 0x3b77], 0x0
        /* __emit: backward jmp rel32 miscomputed by MSVC6 (off-by-8, call-reloc between branch and target) */
        __emit 0xE9
        __emit 0x4F
        __emit 0xFE
        __emit 0xFF
        __emit 0xFF
LDF0B4:
        neg     edx
        push    0xffff
        lea     eax, [esp + 0x2c]
        mov     dword ptr [esp + 0x2c], edx
        mov     edx, dword ptr [edi]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0xc]
        /* __emit: backward jmp rel32 miscomputed by MSVC6 (off-by-8, call-reloc between branch and target) */
        __emit 0xE9
        __emit 0x33
        __emit 0xFE
        __emit 0xFF
        __emit 0xFF
LDF0D0:
        mov     al, byte ptr [esi + 0x3b76]
        test    al, al
        jz      LDF0E3
        cmp     edx, 0xd
        /* __emit: backward jz rel32 miscomputed by MSVC6 (off-by-8, call-reloc between branch and target) */
        __emit 0x0F
        __emit 0x84
        __emit 0x20
        __emit 0xFE
        __emit 0xFF
        __emit 0xFF
LDF0E3:
        mov     al, byte ptr [esi + 0x3b77]
        test    al, al
        jz      LDF0F6
        cmp     edx, 0x1b
        /* __emit: backward jz rel32 miscomputed by MSVC6 (off-by-8, call-reloc between branch and target) */
        __emit 0x0F
        __emit 0x84
        __emit 0x0D
        __emit 0xFE
        __emit 0xFF
        __emit 0xFF
LDF0F6:
        mov     eax, dword ptr [esi + 0x3b70]
        mov     edx, dword ptr [edi]
        push    eax
        lea     ecx, [esp + 0x2c]
        push    ecx
        mov     ecx, edi
        call    dword ptr [edx + 0xc]
        /* __emit: backward jmp rel32 miscomputed by MSVC6 (off-by-8, call-reloc between branch and target) */
        __emit 0xE9
        __emit 0xF5
        __emit 0xFD
        __emit 0xFF
        __emit 0xFF
LDF10E:
        pop     edi
        mov     byte ptr [esi + 0x2c], 0x0
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x34
        ret
LDF11A:
        call    FUN_00723bd0
        and     eax, 0xff
        mov     dword ptr [esp + 0x40], eax
        jz      LDF1A7
        mov     eax, dword ptr [esi + 0x3b70]
        mov     edx, dword ptr [esi + 0x3b54]
        push    eax
        lea     ecx, [esi + 0x3b54]
        lea     eax, [esp + 0x44]
        push    eax
        mov     byte ptr [esi + 0x3b74], 0x1
        call    dword ptr [edx + 0xc]
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x34
        ret
LDF154:
        lea     edi, [esi + 0x3b78]
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      LDF1A0
        call    FUN_00723bd0
        mov     esi, eax
        test    esi, esi
        jz      LDF1A7
LDF170:
        mov     ecx, edi
        call    FUN_0041fd80
        test    eax, eax
        jz      LDF18D
        mov     ecx, edi
        call    FUN_0041fd80
        mov     edx, dword ptr [eax]
        push    esi
        mov     ecx, eax
        call    dword ptr [edx + 0xac]
LDF18D:
        call    FUN_00723bd0
        mov     esi, eax
        test    esi, esi
        jnz     LDF170
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x34
        ret
LDF1A0:
        mov     ecx, esi
        call    FUN_004df2a0
LDF1A7:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x34
        ret
    }
}
