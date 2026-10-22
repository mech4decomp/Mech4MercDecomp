/*
 * FUN_006b3bd0 (389 B) — __cdecl, RET 0. 5 args (arg0..arg4).
 *
 * ABL record handler. Resolves an object via FUN_004e2f20(arg0), then
 * performs obfuscated pointer arithmetic (XOR 0x85739531) to locate a
 * table, updates counters, reads a string via FUN_0041eb40, and iterates
 * a list of elements dispatching virtual calls at vtable+0x88.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  DAT_007dc728;
extern int  DAT_007dab44;
extern int  DAT_007dab40;
extern void __cdecl FUN_004e2f20(void);
extern void __cdecl FUN_0041eb40(void);

__declspec(naked) void __cdecl func_006b3bd0(void)
{
    __asm {
        sub     esp, 0x110
        mov     eax, dword ptr [esp + 0x114]
        mov     ecx, dword ptr [DAT_007dc728]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        call    FUN_004e2f20
        mov     ebp, eax
        mov     ecx, dword ptr [ebp + 0x188]
        test    ecx, ecx
        mov     dword ptr [esp + 0x1c], ebp
        jz      L_3d4a
        mov     edx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [edx]
        mov     ebx, dword ptr [DAT_007dab40]
        mov     esi, dword ptr [esp + 0x12c]
        xor     edx, ebx
        mov     eax, dword ptr [edx + 0x14]
        xor     eax, 0x85739531
        mov     eax, dword ptr [eax + 0x1814]
        mov     ebx, dword ptr [eax + esi*0x4 + 0x9098]
        add     eax, 0x9090
        add     ebx, ecx
        mov     dword ptr [eax + esi*0x4 + 0x8], ebx
        mov     edi, dword ptr [eax + 0xc00]
        add     edi, ecx
        mov     esi, ecx
        and     cl, 0x7
        mov     byte ptr [esp + 0x18], cl
        mov     ecx, dword ptr [edx]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx + 0x24]
        mov     dword ptr [eax + 0xc00], edi
        mov     edi, dword ptr [ebp + 0x184]
        add     ecx, 0x24
        mov     byte ptr [esp + 0x13], 0x0
        sar     edi, 0x3
        sar     esi, 0x3
        xor     ebx, ebx
        call    dword ptr [edx + 0x4]
        test    esi, esi
        mov     dword ptr [esp + 0x14], eax
        jz      L_3caf
L_3c7f:
        lea     ebp, [esp + 0x20]
        mov     ecx, dword ptr [esp + 0x128]
        push    0x8
        push    ebp
        mov     byte ptr [ebp], 0x0
        call    FUN_0041eb40
        mov     edx, dword ptr [esp + 0x14]
        mov     cl, byte ptr [ebp]
        lea     eax, [edx + edi*0x1]
        cmp     cl, byte ptr [eax + ebx*0x1]
        jz      L_3ca6
        mov     byte ptr [esp + 0x13], 0x1
L_3ca6:
        inc     ebx
        inc     ebp
        dec     esi
        __emit 0x75   /* jnz L_3c7f: MSVC6 miscomputes backward rel (off-by-4) due to call reloc between branch and target */
        __emit 0xD4
        mov     ebp, dword ptr [esp + 0x1c]
L_3caf:
        mov     al, byte ptr [esp + 0x18]
        test    al, al
        jz      L_3ce7
        mov     eax, dword ptr [esp + 0x18]
        mov     ecx, dword ptr [esp + 0x128]
        and     eax, 0xff
        lea     esi, [esp + ebx*0x1 + 0x20]
        push    eax
        mov     byte ptr [esi], 0x0
        push    esi
        mov     byte ptr [esi], 0x0
        call    FUN_0041eb40
        mov     ecx, dword ptr [esp + 0x14]
        mov     dl, byte ptr [esi]
        add     ecx, ebx
        cmp     dl, byte ptr [ecx + edi*0x1]
        mov     al, 0x1
        jnz     L_3ceb
L_3ce7:
        mov     al, byte ptr [esp + 0x13]
L_3ceb:
        mov     cl, byte ptr [esp + 0x130]
        test    cl, cl
        jnz     L_3d4a
        test    al, al
        jz      L_3d4a
        mov     edi, dword ptr [ebp + 0x188]
        xor     ebx, ebx
        test    edi, edi
        jle     L_3d4a
        mov     ebp, dword ptr [ebp + 0x17c]
L_3d0c:
        mov     esi, dword ptr [ebp]
        xor     ecx, ecx
        mov     cl, bl
        mov     eax, 0x1
        and     ecx, 0x7
        shl     eax, cl
        mov     ecx, ebx
        sar     ecx, 0x3
        mov     dl, byte ptr [esp + ecx*0x1 + 0x20]
        __emit 0x84   /* test dl,al: MSVC6 swaps reg8 operands (emits 84 D0 for 84 C2) */
        __emit 0xC2
        jz      L_3d42
        mov     eax, dword ptr [esi + 0x10]
        shr     eax, 0x13
        test    al, 0x1
        jnz     L_3d42
        mov     edx, dword ptr [esi]
        push    0x0
        push    0x3
        mov     ecx, esi
        call    dword ptr [edx + 0x88]
L_3d42:
        inc     ebx
        add     ebp, 0x4
        cmp     ebx, edi
        jl      L_3d0c
L_3d4a:
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        add     esp, 0x110
        ret
    }
}
