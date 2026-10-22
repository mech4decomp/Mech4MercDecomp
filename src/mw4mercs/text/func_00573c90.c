/*
 * FUN_00573c90 (526 B) — Move location point handler.
 *
 * Reads parameters from a bytecode stream, including 3 floats,
 * validates state, and dispatches to a virtual method.
 *
 * __cdecl (params on stack), returns undefined4.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_0064db40(void);
extern int __cdecl FUN_0064d3d0(int param1, int param2);
extern int __cdecl FUN_0064c950(int param);
extern int __cdecl FUN_005666d0(void);
extern int __cdecl FUN_006fabf0(int param);
extern int __cdecl FUN_00415230(int param);
extern void __cdecl FUN_005c1990(void);
extern void __cdecl FUN_00563060(int param);

__declspec(naked) unsigned long __cdecl FUN_00573c90(void)
{
    

extern int DAT_00805918;
extern int DAT_00805908;
extern int DAT_0080592c;
extern int DAT_007dde2c;
extern int DAT_007f23d8;
extern int DAT_007f1f70;
extern int DAT_0078096c;
extern int DAT_00779d44;
extern void __cdecl FUN_0075d9f2(void);
extern int DAT_007f23b0;
extern int DAT_00805928;
extern int DAT_0080d9b0;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0x18
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax + 1]
        inc     eax
        inc     eax
        mov dword ptr [DAT_00805908], ecx
        mov     ecx, dword ptr [eax]
        add     eax, 4
        push    2
        push    ecx
        mov dword ptr [DAT_00805918], eax
        call    FUN_0064d3d0
        push    eax
        call    FUN_0064c950
        mov ecx, dword ptr [DAT_0080592c]
        mov     eax, dword ptr [ecx]
        fild    dword ptr [eax]
        sub     ecx, 4
        add     esp, 0xc
        mov dword ptr [DAT_0080592c], ecx
        fstp    dword ptr [ebp - 0x18]
        fild    dword ptr [eax + 4]
        fstp    dword ptr [ebp - 0x14]
        fild    dword ptr [eax + 8]
        mov eax, dword ptr [DAT_00805918]
        inc     eax
        mov dword ptr [DAT_00805918], eax
        fstp    dword ptr [ebp - 0x10]
        movsx   edx, byte ptr [eax - 1]
        mov dword ptr [DAT_00805908], edx
        call    FUN_0064db40
        mov eax, dword ptr [DAT_0080592c]
        mov     ecx, dword ptr [eax]
        sub     eax, 4
        mov dword ptr [DAT_0080592c], eax
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        inc     eax
        mov     dword ptr [ebp - 4], ecx
        mov dword ptr [DAT_00805908], edx
        mov dword ptr [DAT_00805918], eax
        call    FUN_0064db40
        mov eax, dword ptr [DAT_0080592c]
        mov     ecx, dword ptr [eax]
        sub     eax, 4
        cmp     ecx, 1
        mov dword ptr [DAT_0080592c], eax
        setz    al
        mov     byte ptr [ebp - 0xc], al
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax]
        inc     eax
        mov dword ptr [DAT_00805908], ecx
        mov dword ptr [DAT_00805918], eax
        call    FUN_0064db40
        mov eax, dword ptr [DAT_0080592c]
        mov     ecx, dword ptr [eax]
        sub     eax, 4
        cmp     ecx, 1
        mov dword ptr [DAT_0080592c], eax
        mov al, byte ptr [DAT_007dde2c]
        setz    dl
        test    al, al
        mov     byte ptr [ebp - 8], dl
        jz      l_skip_assert1
        mov eax, dword ptr [DAT_007f23d8]
        mov ecx, dword ptr [DAT_007f1f70]
        mov     ecx, dword ptr [ecx + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     l_skip_assert1a
        push    0x780c28
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      l_skip_assert1a
        int     3
l_skip_assert1a:
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      l_skip_assert1
        mov eax, dword ptr [DAT_007f1f70]
        mov     cl, byte ptr [eax + 0x2f9]
        test    cl, cl
        jz      l_skip_assert1
        push    0x780c00
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      l_skip_assert1
        int     3
l_skip_assert1:
        fild    dword ptr [ebp - 4]
        push    ebx
        push    esi
        push    edi
        fmul dword ptr [DAT_0078096c]
        fmul dword ptr [DAT_00779d44]
        call FUN_0075d9f2
        mov ecx, dword ptr [DAT_007f1f70]
        mov     ecx, dword ptr [ecx + 4]
        mov     edi, eax
        mov eax, dword ptr [DAT_007f23b0]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      l_skip_vcall1
        mov esi, dword ptr [DAT_007f1f70]
        mov     al, byte ptr [esi + 0x51c]
        test    al, al
        jz      l_skip_vcall1
        mov     edx, dword ptr [esi]
        mov     ecx, esi
        call    dword ptr [edx + 0x104]
        test    al, al
        jz      l_skip_vcall1
        mov     ecx, esi
        call    FUN_005c1990
l_skip_vcall1:
        mov     edx, dword ptr [ebp - 8]
        mov ecx, dword ptr [DAT_007f1f70]
        mov     eax, dword ptr [ecx]
        push    edx
        mov     edx, dword ptr [ebp - 0xc]
        push    edx
        push    edi
        lea     edx, [ebp - 0x18]
        push    edx
        call    dword ptr [eax + 0x1bc]
        mov esi, dword ptr [DAT_0080592c]
        mov     bl, al
        mov eax, dword ptr [DAT_00805928]
        add     esi, 4
        add     eax, 0xa000
        cmp     esi, eax
        mov dword ptr [DAT_0080592c], esi
        jc      l_no_overflow
        push    0
        call    FUN_00563060
        add     esp, 4
l_no_overflow:
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        xor     ecx, ecx
        test    bl, bl
        setnz   cl
        pop     edi
        inc     eax
        mov dword ptr [DAT_00805918], eax
        mov eax, dword ptr [DAT_0080d9b0]
        mov dword ptr [DAT_00805908], edx
        mov     dword ptr [esi], ecx
        pop     esi
        pop     ebx
        mov     esp, ebp
        pop     ebp
        ret
    }


}
