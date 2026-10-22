// FUN_00534C40 (242 bytes)
// __thiscall, RET 0x4
// Calls several sub-functions and manipulates global state
__declspec(naked) void func_00534c40(void)
{
    

extern int DAT_007dd268;
extern void __cdecl FUN_10051e8b7(void);
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void __cdecl FUN_1004084a4(void);
extern void __cdecl FUN_1004cc386(void);
extern void __cdecl FUN_1004c8e6a(void);
extern void __cdecl FUN_0053fa20(void);
extern void __cdecl FUN_100533439(void);
extern void __cdecl FUN_1005336e2(void);
extern int DAT_007db094;
extern void __cdecl FUN_0053be3d(void);
extern void __cdecl FUN_100516b2d(void);
extern void __cdecl FUN_0054457c(void);
extern void __cdecl FUN_100408423(void);
extern int DAT_00858a38;
extern void __cdecl FUN_005393bb(void);
__asm {
mov     eax, dword ptr [esp + 0x04]
        push    esi
        mov     esi, ecx
        mov ecx, dword ptr [DAT_007dd268]
        push    eax
        call FUN_10051e8b7
        mov ecx, dword ptr [DAT_007dab44]
        mov eax, dword ptr [DAT_007dab40]
        mov     edx, dword ptr [ecx]
        xor     edx, eax
        mov     eax, dword ptr [edx + 0x14]
        xor     eax, 0x85739531
        jnz     skip_alloc
        push    0x1c18
        call FUN_1004084a4
        add     esp, 0x04
        test    eax, eax
        jz      null_ret
        mov     ecx, eax
        call FUN_1004cc386
        jmp     after_ctor
null_ret:
        xor     eax, eax
after_ctor:
        push    0x05
        push    eax
        call FUN_1004c8e6a
        add     esp, 0x08
skip_alloc:
        mov     ecx, esi
        call FUN_0053fa20
        mov     ecx, esi
        call FUN_100533439
        mov     ecx, esi
        call FUN_1005336e2
        mov edx, dword ptr [DAT_007db094]
        xor     ecx, ecx
        mov     cl, byte ptr [edx + 0x28]
        push    0x00
        push    ecx
        mov     ecx, esi
        call FUN_0053be3d
        mov ecx, dword ptr [DAT_007dd268]
        lea     eax, [esp + 0x08]
        push    eax
        call FUN_100516b2d
        mov ecx, dword ptr [DAT_007dab44]
        mov     edx, dword ptr [ecx]
        mov esi, dword ptr [DAT_007dab40]
        mov     eax, dword ptr [eax]
        xor     edx, esi
        mov     ecx, dword ptr [edx + 0x0c]
        push    eax
        xor     ecx, 0x85739531
        call FUN_0054457c
        mov     eax, dword ptr [esp + 0x08]
        test    eax, eax
        pop     esi
        jz      skip_free
        mov     cl, byte ptr [eax - 0x01]
        dec     eax
        dec     cl
        mov     byte ptr [eax], cl
        jnz     skip_free
        push    eax
        call FUN_100408423
        add     esp, 0x04
skip_free:
        mov eax, dword ptr [DAT_007dab44]
        mov     ecx, dword ptr [eax]
        xor ecx, dword ptr [DAT_007dab40]
        mov     ecx, dword ptr [ecx + 0x0c]
        xor     ecx, 0x85739531
        mov dword ptr [DAT_00858a38], 0x538000
        call FUN_005393bb
        ret     0x04
    }


}
