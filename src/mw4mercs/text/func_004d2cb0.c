/* func_004d2cb0.c - inline-asm transcription of FUN_004d2cb0 (79 B) */

extern void __cdecl FUN_00416f60(void);
extern void __cdecl FUN_006fab90(void);

__declspec(naked) unsigned short func_004d2cb0(void)
{
    __asm {
        push ebp
        mov ebp, esp
        push ecx
        push esi
        mov dword ptr [ebp-0x4], 0x14
        lea esi, [ecx+0x14]
    loc_cbf:
        lea eax, [ebp-0x4]
        push eax
        mov ecx, esi
        call FUN_00416f60
        test eax, eax
        jz loc_cf6
        mov eax, dword ptr [ebp-0x4]
        inc eax
        cmp ax, 0x113
        mov dword ptr [ebp-0x4], eax
        jl loc_cbf
        push 0x772640
        call FUN_006fab90
        add esp, 0x4
        test eax, eax
        jz loc_ced
        int 3
    loc_ced:
        or ax, 0xffff
        pop esi
        mov esp, ebp
        pop ebp
        ret
    loc_cf6:
        mov ax, word ptr [ebp-0x4]
        pop esi
        mov esp, ebp
        pop ebp
        ret
    }
}
