/* func_0051C290.c -- in-.text data block (block 0x51AA7D), 387 bytes.
   Four similar functions that look up an object via an obfuscated pointer
   (xor 0x85739531) and call FUN_00416B60 to fetch a field. */

extern int g_7dab44;
extern int g_7dab40;

extern void FUN_00416B60(void);

__declspec(naked) void func_0051C290(void)
{
    __asm {
        mov edx, dword ptr [g_7dab44]
        mov ecx, dword ptr [edx]
        push esi
        mov esi, dword ptr [g_7dab40]
        xor ecx, esi
        add ecx, 0x44
        push edi
        mov edi, dword ptr [ecx]
        xor eax, eax
        xor edi, 0x85739531
        je L_51c2e9
        mov ecx, dword ptr [ecx]
        xor ecx, 0x85739531
        mov edi, dword ptr [ecx + 0x34]
        test edi, edi
        je L_51c2e9
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0x14], ecx
        mov eax, dword ptr [edx]
        xor eax, esi
        mov eax, dword ptr [eax + 0x44]
        xor eax, 0x85739531
        mov ecx, dword ptr [eax + 0x34]
        lea edx, [esp + 0x14]
        push edx
        add ecx, 0x18
        call FUN_00416B60
        mov eax, dword ptr [eax + 0x28]
L_51c2e9:
        pop edi
        pop esi
        ret 0xc
        nop
        nop
        mov edx, dword ptr [g_7dab44]
        mov ecx, dword ptr [edx]
        push esi
        mov esi, dword ptr [g_7dab40]
        xor ecx, esi
        add ecx, 0x44
        push edi
        mov edi, dword ptr [ecx]
        xor eax, eax
        xor edi, 0x85739531
        je L_51c349
        mov ecx, dword ptr [ecx]
        xor ecx, 0x85739531
        mov edi, dword ptr [ecx + 0x34]
        test edi, edi
        je L_51c349
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0x14], ecx
        mov eax, dword ptr [edx]
        xor eax, esi
        mov eax, dword ptr [eax + 0x44]
        xor eax, 0x85739531
        mov ecx, dword ptr [eax + 0x34]
        lea edx, [esp + 0x14]
        push edx
        add ecx, 0x18
        call FUN_00416B60
        mov eax, dword ptr [eax + 0x2c]
L_51c349:
        pop edi
        pop esi
        ret 0xc
        nop
        nop
        mov edx, dword ptr [g_7dab44]
        mov ecx, dword ptr [edx]
        push esi
        mov esi, dword ptr [g_7dab40]
        xor ecx, esi
        add ecx, 0x44
        push edi
        mov edi, dword ptr [ecx]
        xor eax, eax
        xor edi, 0x85739531
        je L_51c3a9
        mov ecx, dword ptr [ecx]
        xor ecx, 0x85739531
        mov edi, dword ptr [ecx + 0x34]
        test edi, edi
        je L_51c3a9
        mov eax, dword ptr [esp + 0x14]
        mov ecx, dword ptr [eax]
        mov dword ptr [esp + 0x14], ecx
        mov eax, dword ptr [edx]
        xor eax, esi
        mov eax, dword ptr [eax + 0x44]
        xor eax, 0x85739531
        mov ecx, dword ptr [eax + 0x34]
        lea edx, [esp + 0x14]
        push edx
        add ecx, 0x18
        call FUN_00416B60
        mov eax, dword ptr [eax + 0x30]
L_51c3a9:
        pop edi
        pop esi
        ret 0xc
        nop
        nop
        mov ecx, dword ptr [g_7dab44]
        mov edx, dword ptr [g_7dab40]
        mov ecx, dword ptr [ecx]
        xor ecx, edx
        mov edx, dword ptr [ecx + 0x44]
        xor eax, eax
        xor edx, 0x85739531
        je L_51c410
        mov edx, dword ptr [ecx + 0x44]
        xor edx, 0x85739531
        push esi
        mov esi, dword ptr [edx + 0x34]
        test esi, esi
        pop esi
        je L_51c410
        mov eax, dword ptr [ecx + 0x44]
        mov ecx, dword ptr [ecx + 0x44]
        xor eax, 0x85739531
        mov eax, dword ptr [eax + 0x34]
        xor ecx, 0x85739531
        mov ecx, dword ptr [ecx + 0x34]
        add eax, 0x58
        push eax
        add ecx, 0x18
        call FUN_00416B60
        mov edx, dword ptr [esp + 0xc]
        mov ecx, dword ptr [edx]
        mov edx, dword ptr [ecx]
        mov eax, dword ptr [eax + 0x34]
        mov eax, dword ptr [eax + edx*4]
L_51c410:
        ret 0xc
    }
}
