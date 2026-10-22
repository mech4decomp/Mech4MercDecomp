/*
 * FUN_00504CE0 (67 B) — Array search using _stricmp
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

__declspec(naked) void func_00504ce0(void)
{
    

extern int DAT_0076b2ac;
__asm {
push ebx
        mov ebx, [esp+0x0C]
        push ebp
        push esi
        push edi
        xor edi, edi
        test ebx, ebx
        jle not_found
        mov eax, [esp+0x14]
        mov esi, [eax]
        mov ebp, [esp+0x1C]
        add esi, 0x04
loop_start:
        mov ecx, [esi]
        push ecx
        push ebp
        call dword ptr [DAT_0076b2ac]
        add esp, 0x08
        test eax, eax
        jz found
        inc edi
        add esi, 0x08
        cmp edi, ebx
        jl loop_start
not_found:
        pop edi
        pop esi
        pop ebp
        or eax, -1
        pop ebx
        ret
found:
        mov eax, edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret
    }


}
