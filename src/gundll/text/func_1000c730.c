// FUN_1000c730 (__fastcall, 82 bytes)
extern void __cdecl FUN_1000c3a0(void);
extern void __cdecl FUN_10001d60(void);

__declspec(naked) void __fastcall FUN_1000c730(void)
{
    __asm {
        push esi
        mov esi, ecx
        cmp dword ptr [esi], 0
        jz L_end
        mov al, byte ptr [esi+0x4]
        push ebx
        xor bl, bl
        test al, al
        jbe L_afterloop
        push edi
    L_loop:
        mov ecx, dword ptr [esi]
        xor eax, eax
        mov al, bl
        mov edi, dword ptr [ecx+eax*4]
        test edi, edi
        jz L_skip
        mov ecx, edi
        call FUN_1000c3a0
        push edi
        call FUN_10001d60
        add esp, 4
    L_skip:
        mov al, byte ptr [esi+0x4]
        inc bl
        cmp bl, al
        jc L_loop
        pop edi
    L_afterloop:
        mov edx, dword ptr [esi]
        push edx
        call FUN_10001d60
        add esp, 4
        mov dword ptr [esi], 0
        pop ebx
    L_end:
        mov byte ptr [esi+0x4], 0
        pop esi
        ret
    }
}
