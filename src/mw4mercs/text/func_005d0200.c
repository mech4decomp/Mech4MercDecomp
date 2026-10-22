/*
 * FUN_005d0200 (144 B) - __thiscall (ECX = this), RET 0x14 (4 stack params).
 *
 * Locks via FUN_006f4950(DAT_007f244c), converts two floats (param1[0],
 * param1[8]) to ints via _ftol, divides each by 10, calls
 * FUN_00676350(x/10, y/10). If result != this, calls __thiscall
 * FUN_005d8c20(x/10, y/10, param3, param4) with this=[0x007f2440].
 * Returns 1 on success, 0 on failure. Unlocks via FUN_006f49a0.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __stdcall FUN_006f4950(int new_ctx);
extern void __stdcall FUN_006f49a0(void);
extern int  __cdecl   FUN_0075db4a(void);   /* _ftol */
extern int  __cdecl   FUN_00676350(int a, int b);
extern char __stdcall FUN_005d8c20(int a, int b, int c, int d);

__declspec(naked) char __stdcall FUN_005d0200(void *param1, int param3, int param4)
{
    

extern int DAT_007f244c;
extern int DAT_007f2440;
__asm {
        mov eax, dword ptr [DAT_007f244c]
        push    ebx
        push    esi
        push    edi
        push    eax
        mov     ebx, ecx
        call    FUN_006f4950
        mov     edi, dword ptr [esp + 0x10]
        fld     dword ptr [edi]
        call    FUN_0075db4a
        fld     dword ptr [edi + 8]
        mov     ecx, eax
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 2
        mov     ecx, edx
        shr     ecx, 31
        add     edx, ecx
        mov     esi, edx
        call    FUN_0075db4a
        mov     ecx, eax
        mov     eax, 0x66666667
        imul    ecx
        sar     edx, 2
        mov     eax, edx
        shr     eax, 31
        add     edx, eax
        mov     edi, edx
        push    edi
        push    esi
        call    FUN_00676350
        add     esp, 8
        cmp     eax, ebx
        jz      loc_5d0283
        mov     ecx, dword ptr [esp + 0x1C]
        mov     edx, dword ptr [esp + 0x18]
        push    ecx
        mov ecx, dword ptr [DAT_007f2440]
        push    edx
        push    edi
        push    esi
        call    FUN_005d8c20
        test    al, al
        jnz     loc_5d0283
        call    FUN_006f49a0
        pop     edi
        pop     esi
        xor     al, al
        pop     ebx
        ret     0x14
loc_5d0283:
        call    FUN_006f49a0
        pop     edi
        pop     esi
        mov     al, 1
        pop     ebx
        ret     0x14
    }


}
