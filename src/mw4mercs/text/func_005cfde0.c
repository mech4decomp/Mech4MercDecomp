/*
 * FUN_005cfde0 (372 B) — __thiscall
 * Iterates two pointer arrays, freeing/unlinking items and rebuilding
 * a lookup table.
 */

__declspec(naked) void func_005cfde0(void)
{
    

extern int DAT_007f244c;
extern void __cdecl FUN_006f4949(void);
extern int DAT_0080da94;
extern void __cdecl FUN_005cff32(void);
extern int DAT_0080daa4;
extern void __cdecl FUN_1004160bd(void);
extern void __cdecl FUN_005d670c(void);
extern void __cdecl FUN_005d10ce(void);
extern int DAT_007f2440;
extern void __cdecl FUN_0067636e(void);
extern int DAT_0080daa8;
extern void __cdecl FUN_100416009(void);
extern void __cdecl FUN_006f483d(void);
__asm {
        mov eax, dword ptr [DAT_007f244c]
        push    ebx
        push    ebp
        push    esi
        push    edi
        push    eax
        mov     ebx, ecx
        call FUN_006f4949
        mov     ebp, [ebx + 0x490]
        cmp     ebp, [ebx + 0x494]
        jz      L_6a
    L_loop1:
        mov     esi, [ebp]
        mov edi, dword ptr [DAT_0080da94]
        mov     ecx, [esi + 0x10]
        cmp     ecx, [edi + 0xc]
        jl      L_4d
        push    esi
        mov     ecx, edi
        call FUN_005cff32
        cmp     eax, -0x1
        jz      L_4d
        mov     edx, [edi]
        mov     ecx, [edx + eax*4]
        cmp     ecx, esi
        lea     eax, [edx + eax*4]
        jnz     L_2e
        mov     ecx, [esi + 0x2c]
        mov     [eax], ecx
    L_2e:
        mov     eax, [esi + 0x30]
        xor     edx, edx
        cmp     eax, edx
        jz      L_3d
        mov     ecx, [esi + 0x2c]
        mov     [eax + 0x2c], ecx
    L_3d:
        mov     ecx, [esi + 0x2c]
        cmp     ecx, edx
        jz      L_47
        mov     [ecx + 0x30], eax
    L_47:
        mov     [esi + 0x30], edx
        mov     [esi + 0x2c], edx
    L_4d:
        test    esi, esi
        jz      L_5d
        mov ecx, dword ptr [DAT_0080daa4]
        push    esi
        call FUN_1004160bd
    L_5d:
        mov     eax, [ebx + 0x494]
        add     ebp, 0x4
        cmp     ebp, eax
        jnz     L_loop1
    L_6a:
        mov     edx, [ebx + 0x490]
        mov     eax, [ebx + 0x494]
        push    edx
        push    eax
        push    eax
        call FUN_005d670c
        mov     [ebx + 0x494], eax
        mov     al, byte ptr [ebx + 0x459]
        add     esp, 0xc
        test    al, al
        jnz     L_48
        mov     al, byte ptr [esp + 0x14]
        test    al, al
        jnz     L_ac
        mov     al, byte ptr [esp + 0x18]
        test    al, al
        jnz     L_ac
        mov     ecx, ebx
        call FUN_005d10ce
    L_ac:
        mov     edi, [ebx + 0x484]
        cmp     edi, [ebx + 0x488]
        jz      L_1e
    L_ba:
        mov     al, byte ptr [esp + 0x14]
        test    al, al
        jnz     L_eff
        mov     ecx, [edi]
        mov eax, dword ptr [DAT_007f2440]
        mov     ebp, [eax + 0x3c]
        mov     edx, [ecx]
        mov     esi, [ecx + 0x4]
        mov     cx, word ptr [ecx + 0x8]
        mov     ebp, [ebp + 0x8]
        lea     eax, [edx + 0x100]
        mov     [esp + 0x18], eax
        lea     eax, [esi + 0x100]
        shl     eax, 0x9
        add     eax, [esp + 0x18]
        push    ebx
        push    esi
        push    edx
        mov     word ptr [ebp + eax*2], cx
        call FUN_0067636e
        add     esp, 0xc
    L_eff:
        mov     eax, [edi]
        test    eax, eax
        jz      L_11
        mov ecx, dword ptr [DAT_0080daa8]
        push    eax
        call FUN_100416009
    L_11:
        mov     eax, [ebx + 0x488]
        add     edi, 0x4
        cmp     edi, eax
        jnz     L_ba
    L_1e:
        mov     eax, [ebx + 0x488]
        mov     edx, [ebx + 0x484]
        mov     ecx, eax
        sub     ecx, eax
        sar     ecx, 0x2
        test    ecx, ecx
        jle     L_42
    L_35:
        mov     esi, [eax]
        mov     [edx], esi
        add     eax, 0x4
        add     edx, 0x4
        dec     ecx
        jnz     L_35
    L_42:
        mov     [ebx + 0x488], edx
    L_48:
        call FUN_006f483d
        pop     edi
        pop     esi
        pop     ebp
        pop     ebx
        ret     0x8
    }


}
