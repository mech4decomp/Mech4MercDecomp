// FUN_0053CB90 (94 bytes) — __fastcall, RET 0x8.
extern int DAT_007dab44;
extern int DAT_007db094;
extern int DAT_007dab40;
extern void FUN_004ce190(int a, int b, int c, int d);
extern void FUN_005313d0(void *ptr);
extern void FUN_005330b0(void *ptr);

__declspec(naked) void func_0053cb90(void)
{
    __asm {
        mov     edx, dword ptr [DAT_007dab44]
        push    esi
        mov     esi, ecx
        mov     ecx, dword ptr [DAT_007db094]
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x28]
        mov     ecx, dword ptr [DAT_007dab40]
        push    1
        push    0
        push    0x34
        push    eax
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004ce190
        mov     ecx, dword ptr [esi + 0x4c]
        cmp     dword ptr [ecx + 0x14], 2
        je      skip
        mov     al, byte ptr [esi + 0x15]
        test    al, al
        jne     skip
        mov     ecx, esi
        call    FUN_005313d0
        mov     edx, dword ptr [esi]
        push    0
        mov     ecx, esi
        call    dword ptr [edx + 0x2c]
    skip:
        mov     ecx, esi
        call    FUN_005330b0
        pop     esi
        ret     8
    }
}
