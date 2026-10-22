/*
 * FUN_006f4f10 (482 B) — __stdcall RET 0x8 (2 params).
 *
 * Recursively walks a tree (param_1[2], param_1[1]). If param_2's low
 * byte is set, iterates a table of nodes starting at DAT_00849298,
 * dispatching FUN_006f4c00 for matching entries, then validates the
 * DAT_0084932c "big allocs" list (assert via FUN_006fab90).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int  DAT_007b6e80;
extern int  DAT_00849334;
extern int  DAT_0084932c;
extern int  DAT_00848e90;

extern void __cdecl FUN_006f4f10(void);
extern void __cdecl FUN_006f4c00(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) void __stdcall func_006f4f10(int *p1, int p2)
{
    __asm {
        push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        push    ebx
        mov     ebx, dword ptr [ebp + 0xc]
        push    esi
        mov     esi, dword ptr [ebp + 0x8]
        mov     eax, dword ptr [esi + 0x8]
        test    eax, eax
        jz      L_4f2c
        push    ebx
        push    eax
        call    FUN_006f4f10
L_4f2c:
        cmp     dword ptr [esi], 0x0
        jnz     L_4f3f
        mov     eax, dword ptr [esi + 0x4]
        test    eax, eax
        jz      L_4f3f
        push    ebx
        push    eax
        call    FUN_006f4f10
L_4f3f:
        test    bl, bl
        jz      L_50be
        mov     eax, 0x849298
        push    edi
        mov     dword ptr [ebp - 0xc], eax
L_4f50:
        mov     esi, dword ptr [eax]
        test    esi, esi
        mov     dword ptr [ebp - 0x4], 0x0
        jz      L_50ac
L_4f61:
        cmp     word ptr [esi + 0x38], 0x0
        jz      L_509e
        mov     cx, word ptr [esi + 0x14]
        cmp     cx, 0x100
        mov     eax, dword ptr [esi + 0x8]
        mov     ebx, dword ptr [esi + 0xc]
        mov     edi, dword ptr [esi + 0x10]
        mov     dword ptr [ebp - 0x4], eax
        jnc     L_5017
        xor     eax, eax
        mov     ax, word ptr [esi + 0x16]
        test    eax, eax
        jle     L_509e
        and     ecx, 0xffff
        mov     dword ptr [ebp + 0xc], ecx
        mov     dword ptr [ebp - 0x8], eax
L_4fa1:
        mov     eax, dword ptr [DAT_007b6e80]
        test    eax, eax
        jz      L_4fdc
        mov     eax, edi
        sub     eax, esi
        cdq
        and     edx, 0xfff
        add     eax, edx
        sar     eax, 0xc
        cmp     word ptr [esi + eax*2 + 0x18], 0x0
        jz      L_4ffd
        mov     eax, ecx
        sub     eax, esi
        add     eax, edi
        cdq
        and     edx, 0xfff
        add     eax, edx
        sar     eax, 0xc
        cmp     word ptr [esi + eax*2 + 0x18], 0x0
        jz      L_4ffd
L_4fdc:
        mov     eax, dword ptr [ebp + 0x8]
        xor     edx, edx
        mov     dl, byte ptr [edi]
        cmp     dword ptr [edx*4 + DAT_00848e90], eax
        jnz     L_4ffd
        lea     ecx, [edi + 0x1]
        push    ecx
        push    ebx
        push    0x0
        push    0x0
        call    FUN_006f4c00
        mov     ecx, dword ptr [ebp + 0xc]
L_4ffd:
        mov     eax, dword ptr [ebp - 0x8]
        mov     edx, dword ptr [DAT_00849334]
        add     edi, ecx
        dec     eax
        lea     ebx, [ebx + edx*4 + 0x1]
        mov     dword ptr [ebp - 0x8], eax
        jnz     L_4fa1
        jmp     L_509e
L_5017:
        xor     eax, eax
        mov     ax, word ptr [esi + 0x16]
        test    eax, eax
        jle     L_509e
        and     ecx, 0xffff
        mov     dword ptr [ebp + 0xc], ecx
        mov     dword ptr [ebp - 0x8], eax
L_502d:
        mov     eax, dword ptr [DAT_007b6e80]
        test    eax, eax
        jz      L_5068
        mov     eax, edi
        sub     eax, esi
        cdq
        and     edx, 0xfff
        add     eax, edx
        sar     eax, 0xc
        cmp     word ptr [esi + eax*2 + 0x18], 0x0
        jz      L_5089
        mov     eax, ecx
        sub     eax, esi
        add     eax, edi
        cdq
        and     edx, 0xfff
        add     eax, edx
        sar     eax, 0xc
        cmp     word ptr [esi + eax*2 + 0x18], 0x0
        jz      L_5089
L_5068:
        mov     eax, dword ptr [ebp + 0x8]
        xor     edx, edx
        mov     dl, byte ptr [edi]
        cmp     dword ptr [edx*4 + DAT_00848e90], eax
        jnz     L_5089
        lea     ecx, [edi + 0x1]
        push    ecx
        push    0x0
        push    ebx
        push    0x0
        call    FUN_006f4c00
        mov     ecx, dword ptr [ebp + 0xc]
L_5089:
        mov     eax, dword ptr [ebp - 0x8]
        mov     edx, dword ptr [DAT_00849334]
        add     edi, ecx
        dec     eax
        lea     ebx, [ebx + edx*4 + 0x1]
        mov     dword ptr [ebp - 0x8], eax
        jnz     L_502d
L_509e:
        mov     esi, dword ptr [ebp - 0x4]
        test    esi, esi
        jnz     L_4f61
        mov     eax, dword ptr [ebp - 0xc]
L_50ac:
        add     eax, 0x4
        cmp     eax, 0x8492e0
        mov     dword ptr [ebp - 0xc], eax
        jl      L_4f50
        pop     edi
L_50be:
        mov     esi, dword ptr [DAT_0084932c]
        test    esi, esi
        jz      L_50ea
        mov     bl, 0xfd
L_50ca:
        cmp     byte ptr [esi + 0x4], bl
        jz      L_50e1
        push    0x79f9d8
        call    FUN_006fab90
        add     esp, 0x4
        test    eax, eax
        jz      L_50e1
        int     3
L_50e1:
        mov     eax, dword ptr [esi]
        mov     esi, dword ptr [eax + 0x8]
        test    esi, esi
        jnz     L_50ca
L_50ea:
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret     0x8
    }
}
