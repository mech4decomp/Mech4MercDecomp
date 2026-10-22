/*
 * func_0051F690 - 97 bytes
 * String decrement/trim operation
 */
__declspec(naked) void func_0051F690()
{
    

extern void __cdecl FUN_100412566(void);
extern int DAT_007dab40;
extern int DAT_007dab44;
extern void __cdecl FUN_00617a3d(void);
extern void __cdecl FUN_100408494(void);
__asm {
push    esi
        mov     esi, [esp + 8]
        mov     eax, [esi + 8]
        mov     ecx, [eax]
        push    ecx
        lea     ecx, [esp + 0x0C]
        call FUN_100412566
        mov     eax, [esi + 4]
        mov     ecx, [eax]
        mov esi, dword ptr [DAT_007dab40]
        lea     edx, [esp + 8]
        push    edx
        mov edx, dword ptr [DAT_007dab44]
        mov     eax, [edx]
        push    ecx
        xor     eax, esi
        mov     ecx, [eax + 0x44]
        xor     ecx, 0x85739531
        call FUN_00617a3d
        mov     eax, [esp + 8]
        test    eax, eax
        pop     esi
        jz      skip_free
        mov     cl, [eax - 1]
        dec     eax
        dec     cl
        mov     [eax], cl
        jnz     skip_free
        push    eax
        call FUN_100408494
        add     esp, 4
skip_free:
        mov     eax, 1
        ret     8
    }


}
