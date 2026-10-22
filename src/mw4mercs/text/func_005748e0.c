/*
 * FUN_005748e0 (274 B) — Shoot point handler.
 *
 * Reads parameters from a bytecode stream, including 3 floats,
 * validates state, and dispatches to a method.
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
extern void __cdecl FUN_005c19e0(void);

__declspec(naked) unsigned long __cdecl FUN_005748e0(void)
{
    

extern int DAT_00805918;
extern int DAT_00805908;
extern int DAT_0080592c;
extern int DAT_007dde2c;
extern int DAT_007f23b0;
extern int DAT_007f1f70;
__asm {
push    ebp
        mov     ebp, esp
        sub     esp, 0xc
        mov eax, dword ptr [DAT_00805918]
        movsx   ecx, byte ptr [eax + 1]
        inc     eax
        inc     eax
        push    esi
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
        fild    dword ptr [eax + 8]
        sub     ecx, 4
        fild    dword ptr [eax + 4]
        add     esp, 0xc
        fild    dword ptr [eax]
        mov eax, dword ptr [DAT_00805918]
        inc     eax
        mov dword ptr [DAT_0080592c], ecx
        fstp    dword ptr [ebp - 0xc]
        mov dword ptr [DAT_00805918], eax
        fstp    dword ptr [ebp - 8]
        fstp    dword ptr [ebp - 4]
        movsx   edx, byte ptr [eax - 1]
        mov dword ptr [DAT_00805908], edx
        call    FUN_0064db40
        mov eax, dword ptr [DAT_0080592c]
        mov     esi, dword ptr [eax]
        sub     eax, 4
        mov dword ptr [DAT_0080592c], eax
        mov al, byte ptr [DAT_007dde2c]
        test    al, al
        jz      l_skip_assert1
        mov eax, dword ptr [DAT_007f23b0]
        mov ecx, dword ptr [DAT_007f1f70]
        mov     ecx, dword ptr [ecx + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jnz     l_skip_assert1a
        push    0x780dfc
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
        push    0x780dd4
        call    FUN_005666d0
        push    eax
        call    FUN_006fabf0
        add     esp, 8
        test    eax, eax
        jz      l_skip_assert1
        int     3
l_skip_assert1:
        push    esi
        lea     ecx, [ebp - 0xc]
        push    ecx
        mov ecx, dword ptr [DAT_007f1f70]
        call    FUN_005c19e0
        mov eax, dword ptr [DAT_00805918]
        movsx   edx, byte ptr [eax]
        inc     eax
        mov dword ptr [DAT_00805918], eax
        mov dword ptr [DAT_00805908], edx
        xor     eax, eax
        pop     esi
        mov     esp, ebp
        pop     ebp
        ret
    }


}
