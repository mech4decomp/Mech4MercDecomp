/*
 * FUN_005d1190 (193 B) - __thiscall (ECX = this), plain RET.
 *
 * Reads this+0x460 (EDI). If non-null, resolves an object via the
 * XOR-obfuscated global pointers [0x007dab44]/[0x007dab40] (key
 * 0x85739531), calls FUN_00415230 (this=[EDI+4]) to test EDI and its
 * +0x2fc link, then either calls a virtual method [EDX+0xa8] or
 * [EAX+0x184] depending on the resolved object.
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern int FUN_00415230(void);

__declspec(naked) void __stdcall FUN_005d1190(void)
{
    

extern int DAT_007dab44;
extern int DAT_007dab40;
extern int DAT_007f23d8;
__asm {
push    ebx
        push    esi
        push    edi
        mov     edi, dword ptr [ecx + 0x460]
        test    edi, edi
        jz      loc_5d124d
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx + 0x18]
        lea     eax, [ecx + 0x18]
        xor     ebx, ebx
        xor     edx, 0x85739531
        push    ebp
        jz      loc_5d11ce
        mov     eax, dword ptr [eax]
        xor     eax, 0x85739531
        mov     ebp, dword ptr [eax + 0x170]
        jmp     loc_5d11d0
loc_5d11ce:
        xor     ebp, ebp
loc_5d11d0:
        mov eax, dword ptr [DAT_007f23d8]
        mov     ecx, dword ptr [edi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      loc_5d11e6
        mov     ebx, edi
        jmp     loc_5d1204
loc_5d11e6:
        mov     esi, dword ptr [edi + 0x2fc]
        test    esi, esi
        jz      loc_5d1204
        mov eax, dword ptr [DAT_007f23d8]
        mov     ecx, dword ptr [esi + 4]
        push    eax
        call    FUN_00415230
        test    al, al
        jz      loc_5d1204
        mov     ebx, esi
loc_5d1204:
        cmp     edi, ebp
        pop     ebp
        jnz     loc_5d123b
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        xor edx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [edx + 0x18]
        xor     ecx, 0x85739531
        lea     eax, [edx + 0x18]
        jz      loc_5d123b
        mov     ecx, dword ptr [eax]
        xor     ecx, 0x85739531
        mov     edx, dword ptr [ecx]
        push    0x0
        call    dword ptr [edx + 0xa8]
        pop     edi
        pop     esi
        pop     ebx
        ret
loc_5d123b:
        test    ebx, ebx
        jz      loc_5d124d
        mov     eax, dword ptr [ebx]
        push    0x1
        push    0x0
        mov     ecx, ebx
        call    dword ptr [eax + 0x184]
loc_5d124d:
        pop     edi
        pop     esi
        pop     ebx
        ret
    }


}
