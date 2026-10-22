/*
 * FUN_005cff90 (613 B) — __thiscall
 * Validates a coordinate, converts to grid indices via _ftol/10, and
 * inserts into a lookup structure.
 */

__declspec(naked) void func_005cff90(void)
{
    

extern int DAT_0080da60;
extern int DAT_0080da58;
extern int DAT_0080da54;
extern int DAT_007f244c;
extern void __cdecl FUN_006f48d9(void);
extern void __cdecl FUN_0075dacc(void);
extern void __cdecl FUN_0075daaf(void);
extern void __cdecl FUN_00676299(void);
extern void __cdecl FUN_006f48d5(void);
extern int DAT_007f2440;
extern void __cdecl FUN_006f48a5(void);
extern void __cdecl FUN_006762a9(void);
extern int DAT_0080daa8;
extern void __cdecl FUN_100415fc3(void);
extern void __cdecl FUN_006f4812(void);
extern void __cdecl FUN_1004082fb(void);
extern void __cdecl FUN_005d6629(void);
extern void __cdecl FUN_005d660c(void);
extern void __cdecl FUN_005d642f(void);
extern void __cdecl FUN_006f4751(void);
__asm {
sub     esp, 0xc
        push    ebx
        push    ebp
        mov     ebp, ecx
        mov     eax, [ebp + 0x41c]
        test    eax, eax
        push    esi
        push    edi
        jz      L_b4
        cmp     eax, 0x1
        jz      L_b4
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0xc
        ret     0x4
    L_b4:
        mov     edi, [esp + 0x20]
        fld     dword ptr [edi]
        fcomp dword ptr [DAT_0080da60]
        fnstsw ax
        test    ah, 0x1
        jnz     L_1e9
        fld     dword ptr [edi + 0x8]
        fcomp dword ptr [DAT_0080da60]
        fnstsw ax
        test    ah, 0x1
        jnz     L_1e9
        fld     dword ptr [edi]
        fcomp dword ptr [DAT_0080da58]
        fnstsw ax
        test    ah, 0x1
        jz      L_1e9
        fld     dword ptr [edi + 0x8]
        fcomp dword ptr [DAT_0080da54]
        fnstsw ax
        test    ah, 0x1
        jz      L_1e9
        mov eax, dword ptr [DAT_007f244c]
        push    eax
        call FUN_006f48d9
        fld     dword ptr [edi]
        call FUN_0075dacc
        fld     dword ptr [edi + 0x8]
        mov     ecx, eax
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 0x2
        mov     ecx, edx
        shr     ecx, 0x1f
        add     edx, ecx
        mov     esi, edx
        call FUN_0075daaf
        mov     ecx, eax
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 0x2
        mov     eax, edx
        shr     eax, 0x1f
        add     edx, eax
        mov     edi, edx
        push    edi
        push    esi
        call FUN_00676299
        add     esp, 0x8
        cmp     eax, ebp
        jz      L_1e4
        test    eax, eax
        jz      L_71
        call FUN_006f48d5
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0xc
        ret     0x4
    L_71:
        mov eax, dword ptr [DAT_007f2440]
        mov     edx, [eax + 0x3c]
        mov     edx, [edx + 0x8]
        mov     ecx, edi
        shl     ecx, 0x9
        add     ecx, esi
        mov     bx, word ptr [edx + ecx*2 + 0x40200]
        test    bl, 0x40
        jz      L_a1
        call FUN_006f48a5
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0xc
        ret     0x4
    L_a1:
        mov     eax, [eax + 0x3c]
        mov     [esp + 0x20], eax
        lea     eax, [edi + 0x100]
        lea     ecx, [esi + 0x100]
        shl     eax, 0x9
        add     eax, ecx
        mov     ecx, [esp + 0x20]
        mov     ecx, [ecx + 0x8]
        push    ebp
        mov     edx, ebx
        or      edx, 0x40
        push    edi
        push    esi
        mov     word ptr [ecx + eax*2], dx
        call FUN_006762a9
        add     esp, 0xc
        test    al, al
        jz      L_1e4
        mov ecx, dword ptr [DAT_0080daa8]
        call FUN_100415fc3
        xor     ecx, ecx
        cmp     eax, ecx
        jz      L_fe
        mov     [eax], esi
        mov     [eax + 0x4], edi
        mov     word ptr [eax + 0x8], bx
        mov     [eax + 0xc], ecx
        mov     [eax + 0x10], ecx
        jmp     L_100
    L_fe:
        xor     eax, eax
    L_100:
        mov     edi, [ebp + 0x488]
        mov     ebx, [ebp + 0x48c]
        cmp     edi, ebx
        mov     [esp + 0x10], eax
        jz      L_134
        test    edi, edi
        jz      L_11a
        mov     [edi], eax
    L_11a:
        add     edi, 0x4
        mov     [ebp + 0x488], edi
        call FUN_006f4812
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0xc
        ret     0x4
    L_134:
        mov     esi, [ebp + 0x484]
        mov     eax, edi
        sub     eax, esi
        sar     eax, 0x2
        cmp     eax, 0x1
        mov     dword ptr [esp + 0x20], 0x1
        mov     [esp + 0x14], eax
        lea     ecx, [esp + 0x20]
        jc      L_15a
        lea     ecx, [esp + 0x14]
    L_15a:
        add     eax, [ecx]
        mov     [esp + 0x14], eax
        jz      L_178
        lea     edx, [eax*4]
        push    edx
        call FUN_1004082fb
        add     esp, 0x4
        mov     [esp + 0x20], eax
        jmp     L_180
    L_178:
        mov     dword ptr [esp + 0x20], 0x0
    L_180:
        mov     eax, [esp + 0x20]
        mov     ecx, [esp + 0x20]
        push    eax
        push    ecx
        push    edi
        push    esi
        call FUN_005d6629
        add     esp, 0x10
        test    eax, eax
        jz      L_19e
        mov     edx, [esp + 0x10]
        mov     [eax], edx
    L_19e:
        mov     ecx, [esp + 0x20]
        push    ecx
        add     eax, 0x4
        push    eax
        push    edi
        push    edi
        call FUN_005d660c
        sub     ebx, esi
        add     esp, 0x10
        sar     ebx, 0x2
        push    ebx
        push    esi
        mov     [esp + 0x20], esi
        lea     esi, [ebp + 0x48c]
        mov     ecx, esi
        mov     edi, eax
        call FUN_005d642f
        mov     eax, [esp + 0x20]
        mov     edx, [esp + 0x14]
        mov     [ebp + 0x484], eax
        lea     eax, [eax + edx*4]
        mov     [ebp + 0x488], edi
        mov     [esi], eax
    L_1e4:
        call FUN_006f4751
    L_1e9:
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 0x1
        pop     ebx
        add     esp, 0xc
        ret     0x4
    }


}
