/*
 * FUN_004B5B80 (510 B, true extent 0x4B5B80-0x4B5D7E) — __thiscall (ret 0xc).
 * MLR update: builds vectors, computes squared distance, iterates a list
 * [ebp+0x150]/[ebp+0x154], does FPU interpolation writing to [0x7dab14],
 * dispatches via vtable offsets 0x130/0x13c.
 *
 * NOTE: the enclosing data block (517 B) also contains a second function
 * at 0x4B5D80 (reported as extra, not transcribed here).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern float g_7daac8;   /* 0x7daac8 */
extern float g_76c5b0;   /* 0x76c5b0 */
extern float g_7dab14;   /* 0x7dab14 (also read/written as int) */

extern void __cdecl FUN_00491280(void);
extern void __cdecl FUN_00491670(void);
extern void __cdecl FUN_004C8460(void);
extern void __cdecl FUN_00419480(void);
extern void __cdecl FUN_0040CA10(void);

__declspec(naked) void FUN_004B5B80(void)
{
    __asm {
        sub     esp, 0x54
        push    ebx
        push    ebp
        push    esi
        mov     ebp, ecx
        push    edi
        lea     ecx, [esp + 0x2c]
        call    FUN_00491280
        mov     esi, dword ptr [ebp + 0x140]
        mov     edi, dword ptr [esp + 0x6c]
        push    esi
        push    edi
        lea     ecx, [esp + 0x34]
        mov     dword ptr [esp + 0x4c], 0
        call    FUN_00491670
        add     esi, 0x18
        push    esi
        add     edi, 0x18
        lea     eax, [esp + 0x48]
        push    edi
        push    eax
        call    FUN_004C8460
        mov     ecx, dword ptr [esp + 0x74]
        add     ecx, 0x80
        add     esp, 0xc
        push    ecx
        lea     ecx, [esp + 0x18]
        call    FUN_00419480
        lea     edx, [ebp + 0x80]
        push    edx
        lea     ecx, [esp + 0x24]
        call    FUN_00419480
        lea     eax, [esp + 0x20]
        push    eax
        lea     ecx, [esp + 0x18]
        push    ecx
        lea     ecx, [esp + 0x1c]
        call    FUN_0040CA10
        fld     dword ptr [esp + 0x18]
        fmul    dword ptr [esp + 0x18]
        fld     dword ptr [esp + 0x1c]
        fmul    dword ptr [esp + 0x1c]
        faddp   st(1), st(0)
        fld     dword ptr [esp + 0x14]
        fmul    dword ptr [esp + 0x14]
        faddp   st(1), st(0)
        fadd    dword ptr [g_7daac8]
        fst     dword ptr [esp + 0x6c]
        fcomp   dword ptr [g_76c5b0]
        fnstsw  ax
        test    ah, 1
        je      L_4B5C36
        mov     dword ptr [esp + 0x6c], 0
L_4B5C36:
        mov     ebx, dword ptr [ebp + 0x154]
        dec     ebx
        js      L_4B5D74
        mov     esi, dword ptr [ebp + 0x150]
        mov     edx, ebx
        shl     edx, 4
        add     esi, edx
L_4B5C50:
        fld     dword ptr [esi]
        fcomp   dword ptr [esp + 0x6c]
        fnstsw  ax
        test    ah, 0x41
        je      L_4B5D68
        fld     dword ptr [esi + 0xc]
        fcomp   dword ptr [esp + 0x6c]
        fnstsw  ax
        test    ah, 1
        jne     L_4B5D68
        fld     dword ptr [esp + 0x6c]
        mov     eax, dword ptr [ebp + 0x144]
        fcomp   dword ptr [esi + 4]
        mov     edi, dword ptr [eax + ebx*4]
        mov     ecx, dword ptr [g_7dab14]
        fld     dword ptr [esp + 0x6c]
        mov     dword ptr [esp + 0x10], ecx
        fnstsw  ax
        test    ah, 1
        je      L_4B5CC3
        fsub    dword ptr [esi]
        mov     edx, dword ptr [esp + 0x2c]
        fld     dword ptr [esi + 4]
        and     edx, 0xffff3fff
        fsub    dword ptr [esi]
        or      edx, 0x10000
        mov     dword ptr [esp + 0x2c], edx
        fdivp   st(1), st(0)
        fmul    dword ptr [g_7dab14]
        fstp    dword ptr [g_7dab14]
        jmp     L_4B5CFA
L_4B5CC3:
        fcomp   dword ptr [esi + 8]
        fnstsw  ax
        test    ah, 0x41
        jne     L_4B5D39
        fld     dword ptr [esi + 0xc]
        mov     eax, dword ptr [esp + 0x2c]
        fsub    dword ptr [esp + 0x6c]
        and     eax, 0xffff3fff
        fld     dword ptr [esi + 0xc]
        or      eax, 0x10000
        fsub    dword ptr [esi + 8]
        mov     dword ptr [esp + 0x2c], eax
        fdivp   st(1), st(0)
        fmul    dword ptr [g_7dab14]
        fstp    dword ptr [g_7dab14]
L_4B5CFA:
        mov     eax, dword ptr [esp + 0x34]
        mov     edx, dword ptr [esp + 0x38]
        or      eax, 0x1c000
        mov     dword ptr [esp + 0x34], eax
        mov     eax, dword ptr [esp + 0x30]
        and     edx, 0xfffe3fff
        and     eax, 0xfffffff0
        or      eax, 2
        mov     dword ptr [esp + 0x38], edx
        mov     edx, dword ptr [esp + 0x3c]
        mov     dword ptr [esp + 0x30], eax
        mov     eax, dword ptr [esp + 0x40]
        or      edx, 0xf
        and     eax, 0xfffffff0
        mov     dword ptr [esp + 0x3c], edx
        mov     dword ptr [esp + 0x40], eax
L_4B5D39:
        mov     ecx, dword ptr [esp + 0x68]
        push    ecx
        mov     ecx, edi
        call    dword ptr [edi + 0x130]
        cmp     eax, -1
        je      L_4B5D5E
        push    eax
        mov     eax, dword ptr [esp + 0x6c]
        lea     edx, [esp + 0x30]
        push    edx
        push    eax
        mov     ecx, edi
        call    dword ptr [edi + 0x13c]
L_4B5D5E:
        mov     ecx, dword ptr [esp + 0x10]
        mov     dword ptr [g_7dab14], ecx
L_4B5D68:
        dec     ebx
        sub     esi, 0x10
        test    ebx, ebx
        jge     L_4B5C50
L_4B5D74:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x54
        ret     0xc
    }
}
