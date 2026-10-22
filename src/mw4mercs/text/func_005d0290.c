/*
 * FUN_005d0290 (312 B) - __thiscall (ECX = this), RET 0xC (3 stack params).
 *
 * Locks via FUN_006f4950(DAT_007f244c). Loops 8 times over a local int
 * table; each iteration computes local_4c = t[i]*param_2 + param_1[0] and
 * local_44 = t[i+1]*param_2 + param_1[2], converts both via _ftol, divides
 * by 10, calls FUN_00676350(x/10, y/10). If result != this, calls __thiscall
 * FUN_005cff90(&local_4c). On success writes 3 floats to param_3 and returns
 * 1; otherwise returns 0. Unlocks via FUN_006f49a0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_006f4950(int new_ctx);
extern void __stdcall FUN_006f49a0(void);
extern int  __cdecl   FUN_0075db4a(void);   /* _ftol */
extern int  __cdecl   FUN_00676350(int a, int b);
extern char __stdcall FUN_005cff90(void *p);

__declspec(naked) char __stdcall FUN_005d0290(void *param1, float param2, void *param3)
{
    

extern int DAT_007f244c;
__asm {
sub     esp, 0x50
        push    ebx
        or      eax, 0xffffffff
        push    ebp
        push    esi
        xor     esi, esi
        mov     dword ptr [esp + 0x1C], eax
        mov     dword ptr [esp + 0x20], eax
        mov     dword ptr [esp + 0x28], eax
        mov     dword ptr [esp + 0x30], eax
        mov     dword ptr [esp + 0x34], eax
        mov     dword ptr [esp + 0x44], eax
        mov eax, dword ptr [DAT_007f244c]
        push    edi
        mov     ebx, ecx
        mov     ecx, 1
        push    eax
        mov     dword ptr [esp + 0x2C], esi
        mov     dword ptr [esp + 0x34], ecx
        mov     dword ptr [esp + 0x40], esi
        mov     dword ptr [esp + 0x44], ecx
        mov     dword ptr [esp + 0x48], esi
        mov     dword ptr [esp + 0x50], ecx
        mov     dword ptr [esp + 0x54], esi
        mov     dword ptr [esp + 0x58], ecx
        mov     dword ptr [esp + 0x5C], ecx
        mov     dword ptr [esp + 0x60], ecx
        mov     dword ptr [esp + 0x18], esi
        mov     dword ptr [esp + 0x1C], esi
        mov     dword ptr [esp + 0x20], esi
        call    FUN_006f4950
        mov     ebp, dword ptr [esp + 0x64]
        mov     dword ptr [esp + 0x10], esi
        lea     esi, [esp + 0x24]
loc_5d0306:
        fild    dword ptr [esi - 4]
        fmul    dword ptr [esp + 0x68]
        fadd    dword ptr [ebp]
        fstp    dword ptr [esp + 0x14]
        fild    dword ptr [esi]
        fmul    dword ptr [esp + 0x68]
        fadd    dword ptr [ebp + 8]
        fstp    dword ptr [esp + 0x1C]
        fld     dword ptr [esp + 0x14]
        call    FUN_0075db4a
        fld     dword ptr [esp + 0x1C]
        mov     ecx, eax
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 2
        mov     ecx, edx
        shr     ecx, 31
        add     edx, ecx
        mov     edi, edx
        call    FUN_0075db4a
        mov     ecx, eax
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 2
        mov     eax, edx
        shr     eax, 31
        add     edx, eax
        push    edx
        push    edi
        call    FUN_00676350
        add     esp, 8
        cmp     eax, ebx
        jz      loc_5d0379
        lea     ecx, [esp + 0x14]
        push    ecx
        mov     ecx, ebx
        call    FUN_005cff90
        test    al, al
        jz      loc_5d039f
loc_5d0379:
        mov     eax, dword ptr [esp + 0x10]
        inc     eax
        add     esi, 8
        cmp     eax, 8
        mov     dword ptr [esp + 0x10], eax
        jl      loc_5d0306
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        xor     al, al
        pop     ebx
        add     esp, 0x50
        ret     0xC
loc_5d039f:
        mov     eax, dword ptr [esp + 0x6C]
        fld     dword ptr [esp + 0x14]
        mov     edx, dword ptr [esp + 0x18]
        fstp    dword ptr [eax]
        mov     ecx, dword ptr [esp + 0x1C]
        mov     dword ptr [eax + 4], edx
        mov     dword ptr [eax + 8], ecx
        call    FUN_006f49a0
        pop     edi
        pop     esi
        pop     ebp
        mov     al, 1
        pop     ebx
        add     esp, 0x50
        ret     0xC
    }


}
