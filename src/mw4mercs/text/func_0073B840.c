/* func_0073B840.c -- in-.text data block (block 0x73A900), 386 bytes.
   Series of small thunks/functions: set a global flag then tail-jump to a
   common handler, plus several boolean getter functions. */

extern int g_7b73f4;
extern int g_7b73f8;
extern int g_7b73dc;
extern int g_8aaec8;
extern int g_8aaecc;
extern int g_8aaed0;
extern int g_8aaed4;
extern int g_8aaed8;
extern int g_8aaedc;
extern int g_8aaee0;
extern unsigned char g_858954;
extern unsigned char g_858959;
extern unsigned char g_85895a;

extern void FUN_00749290(void);
extern void FUN_007492E0(void);

__declspec(naked) void func_0073B840(void)
{
    __asm {
        mov dword ptr [g_7b73f4], 0
        jmp FUN_00749290
        nop
        mov dword ptr [g_7b73f4], 0x800000
        jmp FUN_00749290
        nop
        mov dword ptr [g_7b73f4], 0x1000000
        jmp FUN_00749290
        nop
        mov dword ptr [g_7b73f4], 0x2000000
        jmp FUN_00749290
        nop
        mov dword ptr [g_7b73f4], 0xffffffff
        jmp FUN_00749290
        nop
        mov dword ptr [g_7b73f8], 0
        jmp FUN_007492E0
        nop
        mov dword ptr [g_7b73f8], 0x400000
        jmp FUN_007492E0
        nop
        mov dword ptr [g_7b73f8], 0x800000
        jmp FUN_007492E0
        nop
        mov dword ptr [g_7b73f8], 0x1000000
        jmp FUN_007492E0
        nop
        mov dword ptr [g_7b73f8], 0x2000000
        jmp FUN_007492E0
        nop
        mov dword ptr [g_7b73f8], 0x4000000
        jmp FUN_007492E0
        nop
        mov dword ptr [g_7b73f8], 0xffffffff
        jmp FUN_007492E0
        nop
        mov ecx, dword ptr [g_8aaec8]
        xor eax, eax
        test ecx, ecx
        setne al
        ret
        nop
        nop
        mov ecx, dword ptr [g_8aaecc]
        xor eax, eax
        test ecx, ecx
        setne al
        ret
        nop
        nop
        mov al, byte ptr [g_858954]
        test al, al
        je L_73b938
        mov al, byte ptr [g_858959]
        test al, al
        je L_73b938
        mov eax, 1
        ret
L_73b938:
        xor eax, eax
        ret
        nop
        nop
        nop
        nop
        nop
        mov al, byte ptr [g_858954]
        test al, al
        je L_73b958
        mov al, byte ptr [g_85895a]
        test al, al
        je L_73b958
        mov eax, 1
        ret
L_73b958:
        xor eax, eax
        ret
        nop
        nop
        nop
        nop
        nop
        mov ecx, dword ptr [g_8aaed0]
        xor eax, eax
        test ecx, ecx
        setne al
        ret
        nop
        nop
        mov ecx, dword ptr [g_8aaed4]
        xor eax, eax
        test ecx, ecx
        setne al
        ret
        nop
        nop
        mov ecx, dword ptr [g_8aaed8]
        xor eax, eax
        test ecx, ecx
        setne al
        ret
        nop
        nop
        mov ecx, dword ptr [g_8aaedc]
        xor eax, eax
        test ecx, ecx
        setne al
        ret
        nop
        nop
        mov ecx, dword ptr [g_8aaee0]
        xor eax, eax
        test ecx, ecx
        setne al
        ret
        nop
        nop
        mov ecx, dword ptr [g_7b73dc]
        xor eax, eax
        cmp ecx, 0x200
        sete al
        ret
    }
}
