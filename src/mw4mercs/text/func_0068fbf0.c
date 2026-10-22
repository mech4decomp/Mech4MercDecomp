/*
 * FUN_0068fbf0 (2980 B) — Campaign/mech pathfinding config loader (__fastcall).
 *
 * Reads a config object (ECX = this), walks a linked list of pending
 * waypoints, and populates a large 0x80x0x80 grid (DAT_0080db0c) with
 * pathfinding costs. Contains many repeated refcount-decrement blocks and
 * several table-scan loops over DAT_007b5bb0/7b5bb4.
 *
 * __fastcall (ECX = this), RET 0 (no stack args).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int g_7f2464;   /* 0x007f2464 */
extern int g_82db10;   /* 0x0082db10 */
extern int g_82db0c;   /* 0x0082db0c */
extern int g_80db0c;   /* 0x0080db0c (grid) */
extern int g_80db10;   /* 0x0080db10 (grid) */
extern int g_7b5bb0;   /* 0x007b5bb0 */
extern int g_7b5bb4;   /* 0x007b5bb4 */
extern float g_770168; /* 0x00770168 */
extern int g_7f2438;   /* 0x007f2438 */

extern void __cdecl FUN_006f4950(void);
extern void __cdecl FUN_006907a0(void);
extern void __cdecl FUN_006907f0(void);
extern void __cdecl FUN_006919a0(void);
extern void __cdecl FUN_005d8c20(void);
extern void __cdecl FUN_005d8a30(void);
extern void __cdecl FUN_00691a30(void);
extern void __cdecl FUN_006918f0(void);
extern void __cdecl FUN_004084d0(void);
extern void __cdecl FUN_004084e0(void);
extern void __cdecl FUN_00691af0(void);
extern void __cdecl FUN_00691890(void);
extern void __cdecl FUN_006f49a0(void);

__declspec(naked) void __fastcall FUN_0068fbf0(void)
{
    __asm {
        sub     esp, 0x4c
        mov     eax, dword ptr [g_7f2464]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     edi, ecx
        push    eax
        mov     dword ptr [esp + 0x20], edi
        mov     byte ptr [esp + 0x15], 0x0
        call    FUN_006f4950
        mov     ecx, dword ptr [edi + 0x14]
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 0x2
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        mov     ecx, dword ptr [edi + 0x18]
        mov     ebp, edx
        mov     eax, 0x66666667
        imul    ecx
        mov     ecx, dword ptr [edi + 0x1c]
        sar     edx, 0x2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     ebx, edx
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 0x2
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        mov     ecx, dword ptr [edi + 0x20]
        mov     dword ptr [esp + 0x38], edx
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 0x2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     byte ptr [edi + 0x26], 0x0
        mov     dword ptr [esp + 0x2c], ebp
        mov     dword ptr [esp + 0x24], ebx
        mov     dword ptr [esp + 0x3c], edx
        mov     byte ptr [esp + 0x12], 0x0
        mov     byte ptr [edi + 0x24], 0x0
        mov     byte ptr [esp + 0x13], 0x0
L_fc83:
        xor     eax, eax
L_fc85:
        inc     eax
        cmp     eax, 0xfa
        mov     dword ptr [esp + 0x28], eax
        jg      L_9009a
        mov     ecx, dword ptr [edi + 0x3c]
        test    ecx, ecx
        jz      L_9009a
        mov     ecx, dword ptr [edi + 0x3c]
        lea     eax, [edi + 0x34]
        dec     ecx
        mov     dword ptr [eax + 0x8], ecx
        mov     eax, dword ptr [eax + 0x4]
        mov     esi, eax
        mov     edi, dword ptr [esi]
        test    edi, edi
        mov     dword ptr [esp + 0x40], eax
        jz      L_fd06
L_fcb9:
        mov     ebp, dword ptr [edi + 0xc]
        mov     ebx, dword ptr [edi + 0x8]
        push    ebp
        push    ebx
        call    FUN_006907a0
        push    ebp
        push    ebx
        mov     dword ptr [esp + 0x58], eax
        call    FUN_006907f0
        mov     ecx, dword ptr [esi + 0xc]
        mov     edx, dword ptr [esi + 0x8]
        push    ecx
        push    edx
        mov     ebx, eax
        call    FUN_006907a0
        mov     ecx, dword ptr [esi + 0x8]
        mov     ebp, eax
        mov     eax, dword ptr [esi + 0xc]
        push    eax
        push    ecx
        call    FUN_006907f0
        mov     edx, dword ptr [esp + 0x68]
        add     eax, ebp
        add     ebx, edx
        add     esp, 0x20
        cmp     ebx, eax
        jge     L_fd00
        mov     esi, edi
L_fd00:
        mov     edi, dword ptr [edi]
        test    edi, edi
        jnz     L_fcb9
L_fd06:
        mov     ecx, dword ptr [esi + 0x4]
        xor     ebp, ebp
        cmp     ecx, ebp
        jz      L_fd13
        mov     eax, dword ptr [esi]
        mov     dword ptr [ecx], eax
L_fd13:
        mov     eax, dword ptr [esi]
        cmp     eax, ebp
        jz      L_fd1c
        mov     dword ptr [eax + 0x4], ecx
L_fd1c:
        cmp     dword ptr [esp + 0x40], esi
        jnz     L_fd2c
        mov     ecx, dword ptr [esp + 0x1c]
        add     ecx, 0x34
        mov     dword ptr [ecx + 0x4], eax
L_fd2c:
        cmp     esi, ebp
        mov     ebx, dword ptr [esi + 0x8]
        mov     edi, dword ptr [esi + 0xc]
        mov     dword ptr [esp + 0x4c], ebx
        mov     dword ptr [esp + 0x50], edi
        jz      L_fd47
        push    0x1
        mov     ecx, esi
        call    FUN_006919a0
L_fd47:
        cmp     dword ptr [esp + 0x38], ebx
        jnz     L_fd57
        cmp     dword ptr [esp + 0x3c], edi
        jz      L_90085
L_fd57:
        mov     ecx, dword ptr [g_82db10]
        mov     eax, ebx
        sub     eax, ecx
        jns     L_fd69
        mov     dword ptr [esp + 0x20], ebp
        jmp     L_fdb2
L_fd69:
        mov     edx, dword ptr [g_82db0c]
        mov     ecx, edi
        sub     ecx, edx
        jns     L_fd7b
        mov     dword ptr [esp + 0x20], ebp
        jmp     L_fdb2
L_fd7b:
        cmp     eax, 0x80
        jl      L_fd88
        mov     dword ptr [esp + 0x20], ebp
        jmp     L_fdb2
L_fd88:
        cmp     ecx, 0x80
        jl      L_fd96
        mov     dword ptr [esp + 0x20], ebp
        jmp     L_fdb2
L_fd96:
        shl     eax, 0x7
        sub     eax, edx
        add     eax, edi
        mov     eax, dword ptr [eax*8 + g_80db0c]
        cmp     eax, 0x1
        mov     dword ptr [esp + 0x20], eax
        jle     L_fdb2
        mov     byte ptr [esp + 0x11], 0x0
L_fdb2:
        mov     dword ptr [esp + 0x14], ebp
        mov     dword ptr [esp + 0x18], 0x7b5bb8
L_fdbe:
        mov     eax, dword ptr [esp + 0x18]
        mov     edi, dword ptr [eax + -0x4]
        mov     esi, dword ptr [eax + -0x8]
        mov     ebp, dword ptr [esp + 0x50]
        mov     eax, dword ptr [esp + 0x1c]
        mov     edx, dword ptr [esp + 0x14]
        mov     ebx, dword ptr [esp + 0x4c]
        add     ebp, edi
        xor     edi, edi
        mov     di, word ptr [eax + 0x2c]
        add     esi, ebx
        mov     ebx, dword ptr [eax + 0x30]
        mov     ecx, ebx
        push    edi
        push    edx
        push    ebp
        push    esi
        call    FUN_005d8c20
        test    al, al
        jz      L_90051
        mov     al, byte ptr [esp + 0x11]
        test    al, al
        jnz     L_fe78
        mov     eax, dword ptr [esp + 0x18]
        mov     eax, dword ptr [eax]
        mov     edx, dword ptr [esp + 0x4c]
        lea     eax, [eax + eax*4]
        shl     eax, 0x2
        mov     ecx, dword ptr [eax + g_7b5bb0]
        mov     eax, dword ptr [eax + g_7b5bb4]
        add     ecx, edx
        add     eax, dword ptr [esp + 0x50]
        mov     edx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [edx]
        push    edi
        push    edx
        push    eax
        push    ecx
        mov     ecx, ebx
        call    FUN_005d8c20
        test    al, al
        jz      L_90051
        mov     eax, dword ptr [esp + 0x18]
        mov     eax, dword ptr [eax + 0x4]
        mov     edx, dword ptr [esp + 0x4c]
        lea     eax, [eax + eax*4]
        shl     eax, 0x2
        mov     ecx, dword ptr [eax + g_7b5bb0]
        mov     eax, dword ptr [eax + g_7b5bb4]
        add     ecx, edx
        add     eax, dword ptr [esp + 0x50]
        mov     edx, dword ptr [esp + 0x18]
        mov     edx, dword ptr [edx + 0x4]
        push    edi
        push    edx
        push    eax
        push    ecx
        mov     ecx, ebx
        call    FUN_005d8c20
        test    al, al
        jz      L_90051
L_fe78:
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [eax + 0x4]
        push    edi
        push    ecx
        push    ebp
        push    esi
        mov     ecx, ebx
        call    FUN_005d8a30
        test    eax, eax
        jnz     L_fe97
        mov     edx, dword ptr [esp + 0x18]
        mov     ebx, dword ptr [edx + 0x8]
        jmp     L_feca
L_fe97:
        cmp     eax, 0x1
        jnz     L_feb4
        mov     eax, dword ptr [esp + 0x18]
        mov     edi, dword ptr [eax + 0x8]
        xor     ebx, ebx
        cmp     edi, 0xa
        setnz   bl
        dec     ebx
        and     ebx, 0xfffffff9
        add     ebx, 0x15
        jmp     L_feca
L_feb4:
        mov     ecx, dword ptr [esp + 0x18]
        mov     edi, dword ptr [ecx + 0x8]
        xor     ebx, ebx
        cmp     edi, 0xa
        setnz   bl
        dec     ebx
        and     ebx, 0xfffffffa
        add     ebx, 0x13
L_feca:
        mov     ecx, dword ptr [esp + 0x20]
        mov     edi, dword ptr [esp + 0x1c]
        add     ebx, ecx
        mov     ecx, dword ptr [edi + 0x1c]
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 0x2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     ecx, edx
        mov     edx, dword ptr [edi + 0x20]
        mov     eax, 0x66666667
        imul    edx
        sar     edx, 0x2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     edi, edx
        sub     ecx, esi
        sub     edi, ebp
        test    ecx, ecx
        jge     L_ff0a
        neg     ecx
L_ff0a:
        test    edi, edi
        jge     L_ff10
        neg     edi
L_ff10:
        cmp     edi, ecx
        jge     L_ff1f
        mov     eax, edi
        cdq
        sub     eax, edx
        sar     eax, 0x1
        add     eax, ecx
        jmp     L_ff28
L_ff1f:
        mov     eax, ecx
        cdq
        sub     eax, edx
        sar     eax, 0x1
        add     eax, edi
L_ff28:
        mov     ecx, dword ptr [g_82db10]
        lea     edi, [eax + eax*4]
        shl     edi, 0x1
        mov     eax, esi
        sub     eax, ecx
        mov     dword ptr [esp + 0x48], edi
        js      L_90051
        mov     edx, dword ptr [g_82db0c]
        mov     ecx, ebp
        sub     ecx, edx
        js      L_90051
        cmp     eax, 0x80
        jge     L_90051
        cmp     ecx, 0x80
        jge     L_90051
        push    ebp
        push    esi
        call    FUN_006907a0
        add     esp, 0x8
        test    eax, eax
        jz      L_ff9c
        push    ebp
        push    esi
        call    FUN_006907f0
        push    ebp
        push    esi
        mov     edi, eax
        call    FUN_006907a0
        add     edi, eax
        mov     edx, edi
        mov     edi, dword ptr [esp + 0x58]
        lea     ecx, [edi + ebx*1]
        add     esp, 0x10
        cmp     edx, ecx
        jc      L_90051
L_ff9c:
        mov     edx, dword ptr [g_82db10]
        mov     eax, esi
        sub     eax, edx
        mov     edx, dword ptr [g_82db0c]
        shl     eax, 0x7
        sub     eax, edx
        add     eax, ebp
        shl     eax, 0x3
        mov     dword ptr [eax + g_80db0c], ebx
        mov     dword ptr [eax + g_80db10], edi
        mov     edi, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [edi + 0x38]
        xor     ebx, ebx
        cmp     eax, ebx
        mov     dword ptr [esp + 0x30], esi
        mov     dword ptr [esp + 0x34], ebp
        jz      L_9000a
L_ffd7:
        cmp     esi, dword ptr [eax + 0x8]
        jnz     L_ffe1
        cmp     ebp, dword ptr [eax + 0xc]
        jz      L_ffe9
L_ffe1:
        mov     eax, dword ptr [eax]
        cmp     eax, ebx
        jz      L_9000a
        jmp     L_ffd7
L_ffe9:
        lea     ecx, [esp + 0x30]
        push    ecx
        lea     esi, [edi + 0x34]
        mov     ecx, esi
        call    FUN_00691a30
        test    al, al
        jz      L_90051
        lea     edx, [esp + 0x30]
        push    edx
        mov     ecx, esi
        call    FUN_006918f0
        jmp     L_90051
L_9000a:
        push    0x10
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, ebx
        jz      L_90033
        mov     dword ptr [eax + 0x8], ebx
        mov     dword ptr [eax + 0xc], ebx
        mov     ecx, dword ptr [esp + 0x30]
        mov     dword ptr [eax + 0x8], ecx
        mov     edx, dword ptr [esp + 0x34]
        mov     dword ptr [eax + 0xc], edx
        mov     dword ptr [eax + 0x4], ebx
        mov     dword ptr [eax], ebx
        jmp     L_90035
L_90033:
        xor     eax, eax
L_90035:
        mov     edx, dword ptr [edi + 0x38]
        lea     ecx, [edi + 0x34]
        mov     edi, dword ptr [ecx + 0x8]
        inc     edi
        cmp     edx, ebx
        mov     dword ptr [eax + 0x4], ebx
        mov     dword ptr [ecx + 0x8], edi
        mov     dword ptr [eax], edx
        jz      L_9004e
        mov     dword ptr [edx + 0x4], eax
L_9004e:
        mov     dword ptr [ecx + 0x4], eax
L_90051:
        mov     eax, dword ptr [esp + 0x18]
        mov     esi, dword ptr [esp + 0x14]
        add     eax, 0x14
        inc     esi
        cmp     eax, 0x7b5c58
        mov     dword ptr [esp + 0x14], esi
        mov     dword ptr [esp + 0x18], eax
        jl      L_fdbe
        mov     eax, dword ptr [esp + 0x28]
        mov     edi, dword ptr [esp + 0x1c]
        mov     ebx, dword ptr [esp + 0x24]
        mov     ebp, dword ptr [esp + 0x2c]
        jmp     L_fc85
L_90085:
        mov     edi, dword ptr [esp + 0x1c]
        mov     eax, dword ptr [esp + 0x28]
        mov     ebp, dword ptr [esp + 0x2c]
        mov     ebx, dword ptr [esp + 0x24]
        mov     byte ptr [esp + 0x12], 0x1
L_9009a:
        mov     cl, byte ptr [esp + 0x13]
        test    cl, cl
        jnz     L_90219
        cmp     eax, 0x2
        jg      L_90219
        mov     al, byte ptr [esp + 0x12]
        test    al, al
        jnz     L_902dd
        mov     ecx, dword ptr [edi + 0x1c]
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 0x2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     ecx, edx
        mov     edx, dword ptr [edi + 0x20]
        mov     eax, 0x66666667
        imul    edx
        sar     edx, 0x2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     esi, edx
        sub     ecx, ebp
        sub     esi, ebx
        test    ecx, ecx
        jge     L_900f1
        neg     ecx
L_900f1:
        test    esi, esi
        jge     L_900f7
        neg     esi
L_900f7:
        cmp     esi, ecx
        jge     L_90106
        mov     eax, esi
        cdq
        sub     eax, edx
        sar     eax, 0x1
        add     eax, ecx
        jmp     L_9010f
L_90106:
        mov     eax, ecx
        cdq
        sub     eax, edx
        sar     eax, 0x1
        add     eax, esi
L_9010f:
        mov     ecx, dword ptr [g_82db10]
        lea     esi, [eax + eax*4]
        shl     esi, 0x1
        mov     eax, ebp
        and     esi, 0xffff
        sub     eax, ecx
        js      L_901a1
        mov     edx, dword ptr [g_82db0c]
        mov     ecx, ebx
        sub     ecx, edx
        js      L_901a1
        cmp     eax, 0x80
        jge     L_901a1
        cmp     ecx, 0x80
        jge     L_901a1
        push    ebx
        push    ebp
        call    FUN_006907a0
        add     esp, 0x8
        test    eax, eax
        jz      L_90177
        push    ebx
        push    ebp
        call    FUN_006907f0
        mov     edx, eax
        push    ebx
        push    ebp
        mov     dword ptr [esp + 0x58], edx
        call    FUN_006907a0
        mov     ecx, dword ptr [esp + 0x58]
        mov     ebx, dword ptr [esp + 0x34]
        add     ecx, eax
        lea     edx, [esi + 0x1]
        add     esp, 0x10
        cmp     ecx, edx
        jc      L_901a1
L_90177:
        mov     ecx, dword ptr [g_82db10]
        mov     eax, ebp
        sub     eax, ecx
        mov     ecx, dword ptr [g_82db0c]
        shl     eax, 0x7
        sub     eax, ecx
        add     eax, ebx
        shl     eax, 0x3
        mov     dword ptr [eax + g_80db0c], 0x1
        mov     dword ptr [eax + g_80db10], esi
L_901a1:
        mov     eax, dword ptr [edi + 0x38]
        test    eax, eax
        jz      L_901ca
L_901a8:
        test    eax, eax
        mov     esi, dword ptr [eax]
        jz      L_901c4
        push    eax
        mov     dword ptr [eax + 0x4], 0x0
        mov     dword ptr [eax], 0x0
        call    FUN_004084e0
        add     esp, 0x4
L_901c4:
        test    esi, esi
        mov     eax, esi
        jnz     L_901a8
L_901ca:
        xor     esi, esi
        push    0x10
        mov     dword ptr [edi + 0x38], esi
        mov     dword ptr [edi + 0x3c], esi
        call    FUN_004084d0
        add     esp, 0x4
        cmp     eax, esi
        jz      L_901f3
        mov     dword ptr [eax + 0x8], esi
        mov     dword ptr [eax + 0xc], esi
        mov     dword ptr [eax + 0x8], ebp
        mov     dword ptr [eax + 0xc], ebx
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax], esi
        jmp     L_901f5
L_901f3:
        xor     eax, eax
L_901f5:
        inc     dword ptr [edi + 0x3c]
        mov     ecx, dword ptr [edi + 0x38]
        cmp     ecx, esi
        mov     dword ptr [eax + 0x4], esi
        mov     dword ptr [eax], ecx
        jz      L_90207
        mov     dword ptr [ecx + 0x4], eax
L_90207:
        mov     dword ptr [edi + 0x38], eax
        mov     byte ptr [esp + 0x11], 0x1
        mov     byte ptr [esp + 0x13], 0x1
        jmp     L_fc83
L_90219:
        mov     cl, byte ptr [esp + 0x12]
        test    cl, cl
        jnz     L_902dd
        cmp     eax, 0xfa
        jle     L_9028f
        mov     ecx, dword ptr [edi + 0x28]
        add     ecx, eax
        mov     eax, ecx
        cmp     eax, 0x1388
        mov     dword ptr [edi + 0x28], ecx
        jle     L_90787
        mov     eax, dword ptr [edi + 0x38]
        test    eax, eax
        jz      L_9026a
L_90248:
        test    eax, eax
        mov     esi, dword ptr [eax]
        jz      L_90264
        push    eax
        mov     dword ptr [eax + 0x4], 0x0
        mov     dword ptr [eax], 0x0
        call    FUN_004084e0
        add     esp, 0x4
L_90264:
        test    esi, esi
        mov     eax, esi
        jnz     L_90248
L_9026a:
        mov     ecx, dword ptr [g_7f2438]
        xor     eax, eax
        mov     dword ptr [edi + 0x38], eax
        mov     dword ptr [edi + 0x3c], eax
        mov     byte ptr [edi + 0x24], al
        mov     byte ptr [ecx + 0x14], 0x1
        mov     byte ptr [edi + 0x25], al
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x4c
        ret
L_9028f:
        mov     eax, dword ptr [edi + 0x38]
        test    eax, eax
        jz      L_902b8
L_90296:
        test    eax, eax
        mov     esi, dword ptr [eax]
        jz      L_902b2
        push    eax
        mov     dword ptr [eax + 0x4], 0x0
        mov     dword ptr [eax], 0x0
        call    FUN_004084e0
        add     esp, 0x4
L_902b2:
        test    esi, esi
        mov     eax, esi
        jnz     L_90296
L_902b8:
        mov     edx, dword ptr [g_7f2438]
        xor     eax, eax
        mov     dword ptr [edi + 0x38], eax
        mov     dword ptr [edi + 0x3c], eax
        mov     byte ptr [edi + 0x24], al
        mov     byte ptr [edx + 0x14], 0x1
        mov     byte ptr [edi + 0x25], al
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x4c
        ret
L_902dd:
        mov     eax, dword ptr [esp + 0x3c]
        mov     edx, dword ptr [esp + 0x38]
        mov     esi, dword ptr [edi + 0x10]
        lea     ecx, [edi + 0x8]
        mov     dword ptr [esp + 0x50], eax
        mov     dword ptr [esp + 0x44], eax
        mov     eax, dword ptr [ecx + 0x4]
        cmp     eax, esi
        mov     ebp, edx
        mov     dword ptr [esp + 0x48], 0xffffffff
        mov     dword ptr [esp + 0x30], 0x0
        mov     dword ptr [esp + 0x4c], ebp
        mov     dword ptr [esp + 0x40], edx
        jz      L_90329
        test    eax, eax
        jz      L_90321
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [esp + 0x44]
        mov     dword ptr [eax + 0x4], edx
L_90321:
        add     eax, 0x8
        mov     dword ptr [ecx + 0x4], eax
        jmp     L_90336
L_90329:
        push    0x1
        lea     edx, [esp + 0x44]
        push    edx
        push    eax
        call    FUN_00691af0
L_90336:
        mov     eax, dword ptr [edi + 0x38]
        test    eax, eax
        jz      L_9035f
L_9033d:
        test    eax, eax
        mov     esi, dword ptr [eax]
        jz      L_90359
        push    eax
        mov     dword ptr [eax + 0x4], 0x0
        mov     dword ptr [eax], 0x0
        call    FUN_004084e0
        add     esp, 0x4
L_90359:
        test    esi, esi
        mov     eax, esi
        jnz     L_9033d
L_9035f:
        xor     eax, eax
        mov     dword ptr [edi + 0x38], eax
        mov     dword ptr [edi + 0x3c], eax
        mov     dword ptr [esp + 0x28], eax
L_9036b:
        mov     eax, dword ptr [esp + 0x28]
        inc     eax
        cmp     eax, 0x9c4
        mov     dword ptr [esp + 0x28], eax
        jg      L_90738
        mov     eax, dword ptr [g_7b5bb0]
        mov     edx, dword ptr [esp + 0x50]
        mov     ebx, dword ptr [g_82db10]
        lea     esi, [eax + ebp*1]
        mov     eax, dword ptr [g_7b5bb4]
        add     edx, eax
        xor     ecx, ecx
        mov     eax, esi
        sub     eax, ebx
        mov     dword ptr [esp + 0x20], ecx
        js      L_903f1
        mov     ebx, dword ptr [g_82db0c]
        mov     ecx, edx
        sub     ecx, ebx
        jns     L_903ba
        mov     dword ptr [esp + 0x18], 0x0
        jmp     L_903f5
L_903ba:
        cmp     eax, 0x80
        jl      L_903cb
        mov     dword ptr [esp + 0x18], 0x0
        jmp     L_903f5
L_903cb:
        cmp     ecx, 0x80
        jl      L_903dd
        mov     dword ptr [esp + 0x18], 0x0
        jmp     L_903f5
L_903dd:
        mov     ebx, dword ptr [g_82db0c]
        shl     eax, 0x7
        sub     eax, ebx
        add     eax, edx
        mov     ecx, dword ptr [eax*8 + g_80db0c]
L_903f1:
        mov     dword ptr [esp + 0x18], ecx
L_903f5:
        mov     dword ptr [esp + 0x14], 0x1
        mov     ebx, 0x7b5bcc
L_90402:
        cmp     esi, dword ptr [esp + 0x2c]
        jnz     L_90412
        cmp     edx, dword ptr [esp + 0x24]
        jz      L_9058c
L_90412:
        mov     esi, dword ptr [ebx + -0x8]
        mov     eax, dword ptr [esp + 0x50]
        mov     edx, dword ptr [ebx + -0x4]
        mov     ecx, dword ptr [g_82db10]
        add     esi, ebp
        add     edx, eax
        mov     eax, esi
        sub     eax, ecx
        mov     dword ptr [esp + 0x40], esi
        mov     dword ptr [esp + 0x38], edx
        jns     L_90438
        xor     eax, eax
        jmp     L_90471
L_90438:
        mov     ecx, edx
        sub     ecx, dword ptr [g_82db0c]
        jns     L_90446
        xor     eax, eax
        jmp     L_90471
L_90446:
        cmp     eax, 0x80
        jl      L_90451
        xor     eax, eax
        jmp     L_90471
L_90451:
        cmp     ecx, 0x80
        jl      L_9045d
        xor     eax, eax
        jmp     L_90471
L_9045d:
        mov     ecx, dword ptr [g_82db0c]
        shl     eax, 0x7
        sub     eax, ecx
        add     eax, edx
        mov     eax, dword ptr [eax*8 + g_80db0c]
L_90471:
        test    eax, eax
        mov     ecx, eax
        mov     dword ptr [esp + 0x3c], ecx
        jz      L_90519
        cmp     byte ptr [esp + 0x13], 0x0
        jnz     L_90519
        cmp     eax, 0x10
        jg      L_90519
        mov     ecx, dword ptr [ebx]
        mov     esi, dword ptr [esp + 0x50]
        lea     eax, [ecx + ecx*4]
        shl     eax, 0x2
        mov     edx, dword ptr [eax + g_7b5bb0]
        mov     eax, dword ptr [eax + g_7b5bb4]
        add     eax, esi
        xor     esi, esi
        mov     si, word ptr [edi + 0x2c]
        mov     edi, dword ptr [edi + 0x30]
        add     ecx, 0x4
        add     edx, ebp
        push    esi
        push    ecx
        push    eax
        push    edx
        mov     ecx, edi
        call    FUN_005d8c20
        test    al, al
        jnz     L_904d2
        mov     dword ptr [esp + 0x3c], 0x0
L_904d2:
        mov     ecx, dword ptr [ebx + 0x4]
        lea     eax, [ecx + ecx*4]
        shl     eax, 0x2
        mov     edx, dword ptr [eax + g_7b5bb0]
        mov     eax, dword ptr [eax + g_7b5bb4]
        add     edx, ebp
        mov     ebp, dword ptr [esp + 0x50]
        push    esi
        add     ecx, 0x4
        push    ecx
        add     eax, ebp
        push    eax
        push    edx
        mov     ecx, edi
        call    FUN_005d8c20
        test    al, al
        jnz     L_90505
        xor     ecx, ecx
        jmp     L_90509
L_90505:
        mov     ecx, dword ptr [esp + 0x3c]
L_90509:
        mov     edx, dword ptr [esp + 0x38]
        mov     esi, dword ptr [esp + 0x40]
        mov     ebp, dword ptr [esp + 0x4c]
        mov     edi, dword ptr [esp + 0x1c]
L_90519:
        mov     eax, dword ptr [esp + 0x18]
        cmp     ecx, eax
        jnc     L_90525
        test    ecx, ecx
        jnz     L_90529
L_90525:
        test    eax, eax
        jnz     L_90535
L_90529:
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x18], ecx
        mov     dword ptr [esp + 0x20], eax
L_90535:
        mov     eax, dword ptr [esp + 0x14]
        inc     eax
        add     ebx, 0x14
        cmp     ebx, 0x7b5c58
        mov     dword ptr [esp + 0x14], eax
        jl      L_90402
        mov     eax, dword ptr [esp + 0x18]
        test    eax, eax
        jnz     L_9064a
        mov     edx, dword ptr [g_7b5bb0]
        mov     ecx, dword ptr [g_7b5bb4]
        lea     eax, [edx + ebp*1]
        mov     edx, dword ptr [esp + 0x50]
        add     ecx, edx
        mov     edx, dword ptr [g_82db10]
        xor     ebx, ebx
        sub     eax, edx
        mov     dword ptr [esp + 0x20], ebx
        js      L_905bf
        mov     esi, dword ptr [g_82db0c]
        mov     edx, ecx
        sub     edx, esi
        jns     L_9059a
        jmp     L_905bf
L_9058c:
        mov     ecx, dword ptr [esp + 0x14]
        dec     ecx
        mov     dword ptr [esp + 0x20], ecx
        jmp     L_9064a
L_9059a:
        cmp     eax, 0x80
        jl      L_905a5
        xor     ebx, ebx
        jmp     L_905bf
L_905a5:
        cmp     edx, 0x80
        jl      L_905b1
        xor     ebx, ebx
        jmp     L_905bf
L_905b1:
        shl     eax, 0x7
        sub     eax, esi
        add     eax, ecx
        mov     ebx, dword ptr [eax*8 + g_80db0c]
L_905bf:
        mov     dword ptr [esp + 0x14], 0x1
        mov     edx, 0x7b5bc8
L_905cc:
        mov     esi, dword ptr [esp + 0x50]
        mov     ecx, dword ptr [edx]
        mov     eax, dword ptr [edx + -0x4]
        add     ecx, esi
        mov     esi, dword ptr [g_82db10]
        add     eax, ebp
        sub     eax, esi
        jns     L_905e7
        xor     eax, eax
        jmp     L_90620
L_905e7:
        mov     esi, ecx
        sub     esi, dword ptr [g_82db0c]
        jns     L_905f5
        xor     eax, eax
        jmp     L_90620
L_905f5:
        cmp     eax, 0x80
        jl      L_90600
        xor     eax, eax
        jmp     L_90620
L_90600:
        cmp     esi, 0x80
        jl      L_9060c
        xor     eax, eax
        jmp     L_90620
L_9060c:
        mov     esi, dword ptr [g_82db0c]
        shl     eax, 0x7
        sub     eax, esi
        add     eax, ecx
        mov     eax, dword ptr [eax*8 + g_80db0c]
L_90620:
        cmp     eax, ebx
        jnc     L_90628
        test    eax, eax
        jnz     L_9062c
L_90628:
        test    ebx, ebx
        jnz     L_90636
L_9062c:
        mov     ebx, eax
        mov     eax, dword ptr [esp + 0x14]
        mov     dword ptr [esp + 0x20], eax
L_90636:
        mov     esi, dword ptr [esp + 0x14]
        inc     esi
        add     edx, 0x14
        cmp     edx, 0x7b5c54
        mov     dword ptr [esp + 0x14], esi
        jl      L_905cc
L_9064a:
        mov     ecx, dword ptr [esp + 0x20]
        fld     dword ptr [esp + 0x30]
        mov     esi, dword ptr [esp + 0x50]
        fadd    dword ptr [g_770168]
        lea     eax, [ecx + ecx*4]
        shl     eax, 0x2
        mov     edx, dword ptr [eax + g_7b5bb4]
        fstp    dword ptr [esp + 0x30]
        mov     ebx, dword ptr [eax + g_7b5bb0]
        add     esi, edx
        mov     edx, dword ptr [esp + 0x48]
        add     ebp, ebx
        xor     al, al
        cmp     edx, ecx
        mov     dword ptr [esp + 0x4c], ebp
        mov     dword ptr [esp + 0x50], esi
        jz      L_906d5
        mov     eax, esi
        mov     esi, dword ptr [edi + 0x10]
        lea     ecx, [edi + 0x8]
        mov     dword ptr [esp + 0x58], eax
        mov     eax, dword ptr [ecx + 0x4]
        cmp     eax, esi
        mov     edx, ebp
        mov     dword ptr [esp + 0x30], 0x0
        mov     dword ptr [esp + 0x54], edx
        jz      L_906be
        test    eax, eax
        jz      L_906b6
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [esp + 0x58]
        mov     dword ptr [eax + 0x4], edx
L_906b6:
        add     eax, 0x8
        mov     dword ptr [ecx + 0x4], eax
        jmp     L_906cb
L_906be:
        push    0x1
        lea     edx, [esp + 0x58]
        push    edx
        push    eax
        call    FUN_00691af0
L_906cb:
        mov     ecx, dword ptr [esp + 0x20]
        mov     al, 0x1
        mov     dword ptr [esp + 0x48], ecx
L_906d5:
        cmp     dword ptr [esp + 0x2c], ebp
        jnz     L_9036b
        mov     edx, dword ptr [esp + 0x50]
        cmp     dword ptr [esp + 0x24], edx
        jnz     L_9036b
        test    al, al
        jnz     L_90732
        mov     eax, dword ptr [esp + 0x50]
        mov     esi, dword ptr [edi + 0x10]
        lea     ecx, [edi + 0x8]
        mov     dword ptr [esp + 0x58], eax
        mov     eax, dword ptr [ecx + 0x4]
        cmp     eax, esi
        mov     edx, ebp
        mov     dword ptr [esp + 0x54], edx
        jz      L_90725
        test    eax, eax
        jz      L_90719
        mov     dword ptr [eax], edx
        mov     edx, dword ptr [esp + 0x58]
        mov     dword ptr [eax + 0x4], edx
L_90719:
        add     eax, 0x8
        mov     dword ptr [ecx + 0x4], eax
        mov     byte ptr [edi + 0x24], 0x1
        jmp     L_90745
L_90725:
        push    0x1
        lea     edx, [esp + 0x58]
        push    edx
        push    eax
        call    FUN_00691af0
L_90732:
        mov     byte ptr [edi + 0x24], 0x1
        jmp     L_90745
L_90738:
        mov     eax, dword ptr [g_7f2438]
        mov     byte ptr [edi + 0x24], 0x0
        mov     byte ptr [eax + 0x14], 0x1
L_90745:
        mov     al, byte ptr [edi + 0x24]
        test    al, al
        jnz     L_90767
        mov     ecx, dword ptr [g_7f2438]
        mov     byte ptr [ecx + 0x14], 0x1
        mov     byte ptr [edi + 0x25], 0x0
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x4c
        ret
L_90767:
        mov     ecx, edi
        call    FUN_00691890
        mov     eax, dword ptr [edi + 0x8]
        mov     dword ptr [edi + 0x4], eax
        cmp     eax, dword ptr [edi + 0xc]
        jz      L_9077f
        add     eax, 0x8
        mov     dword ptr [edi + 0x4], eax
L_9077f:
        mov     byte ptr [edi + 0x24], 0x1
        mov     byte ptr [edi + 0x25], 0x0
L_90787:
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x4c
        ret
    }
}
