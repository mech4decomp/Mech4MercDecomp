/*
 * FUN_00586630 (261 B)
 *
 * CFLAGS: /O1
 */

extern void __cdecl FUN_0051C6B0(void);
extern void __cdecl FUN_0051C650(void);

__declspec(naked) void __stdcall FUN_00586630(void)
{
    __asm {
        sub esp, 28h
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov eax, dword ptr [esi+0D8h]
        push edi
        add eax, 80h
        push eax
        lea ebp, [esi+198h]
        lea edi, [esi+168h]
        push ebp
        mov ecx, edi
        call FUN_0051C6B0
        fld dword ptr [esi+170h]
        mov eax, dword ptr [esi+0D8h]
        mov ecx, dword ptr [eax+9Ch]
        mov edx, dword ptr [eax+0ACh]
        lea ebx, [eax+80h]
        mov eax, dword ptr [edi]
        fabs
        fstp dword ptr [esp+10h]
        mov dword ptr [esp+24h], ecx
        fld dword ptr [ebx+0Ch]
        mov ecx, dword ptr [edi+4]
        fld dword ptr [esi+9B4h]
        mov dword ptr [esp+28h], edx
        mov edx, dword ptr [edi+8]
        fsub st, st(1)
        mov dword ptr [esp+14h], eax
        push ebx
        fstp dword ptr [esp+30h]
        lea eax, [esp+30h]
        mov dword ptr [esp+1Ch], ecx
        fstp st(0)
        push eax
        fld dword ptr [esi+9B8h]
        lea ecx, [esp+1Ch]
        fsub dword ptr [esp+2Ch]
        mov dword ptr [esp+24h], edx
        fstp dword ptr [esp+38h]
        fld dword ptr [esi+9BCh]
        fsub dword ptr [esp+30h]
        fstp dword ptr [esp+3Ch]
        call FUN_0051C6B0
        fld dword ptr [esp+10h]
        mov ecx, dword ptr [esp+1Ch]
        fchs
        mov dword ptr [esi+170h], ecx
        fld dword ptr [esp+1Ch]
        fcomp st(1)
        fnstsw ax
        test ah, 1
        jz label1
        push ebx
        fstp dword ptr [esi+170h]
        push edi
        mov ecx, ebp
        call FUN_0051C650
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 28h
        ret
label1:
        fstp st(0)
        fld dword ptr [esp+1Ch]
        fcomp dword ptr [esp+10h]
        fnstsw ax
        test ah, 41h
        jnz label2
        mov edx, dword ptr [esp+10h]
        mov dword ptr [esi+170h], edx
label2:
        push ebx
        push edi
        mov ecx, ebp
        call FUN_0051C650
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 28h
        ret
    }
}
