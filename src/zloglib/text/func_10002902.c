/*
 * ZlogLib.dll - FUN_10002902 (0x10002902, 47 B, __cdecl)
 * memset-style: fills count bytes of dst with byte value.
 * Transcribed from ZlogLib.dll reference bytes; verified 100%.
 */
__declspec(naked) void FUN_10002902(void)
{
    __asm {
        mov ecx, dword ptr [esp + 0xc]
        test ecx, ecx
        jbe done
        mov al, byte ptr [esp + 0x8]
        push ebx
        mov bl, al
        mov bh, bl
        mov edx, ecx
        push edi
        mov edi, dword ptr [esp + 0xc]
        shr ecx, 0x2
        mov eax, ebx
        shl eax, 0x10
        mov ax, bx
        rep stosd
        mov ecx, edx
        and ecx, 0x3
        rep stosb
        pop edi
        pop ebx
    done:
        ret
    }
}
