// FUN_0053CF40 (63 bytes)
extern int DAT_007db094;
extern int DAT_007dab44;
extern int DAT_007dab40;
extern void FUN_005313d0(void);
extern void FUN_004ce190(int a, int b, int c, int d);

__declspec(naked) void func_0053cf40(void)
{
    __asm {
        mov     eax, dword ptr [DAT_007db094]
        test    eax, eax
        je      done
        call    FUN_005313d0
        mov     ecx, dword ptr [DAT_007db094]
        mov     edx, dword ptr [DAT_007dab44]
        xor     eax, eax
        mov     al, byte ptr [ecx + 0x28]
        mov     ecx, dword ptr [DAT_007dab40]
        push    1
        push    0
        push    0x1d
        push    eax
        mov     eax, dword ptr [edx]
        xor     eax, ecx
        mov     ecx, dword ptr [eax + 0x14]
        xor     ecx, 0x85739531
        call    FUN_004ce190
    done:
        ret
    }
}
