// FUN_10038e3f (0x10038E3F) __stdcall, 168 bytes
extern unsigned int g_10076a94;
extern int g_10076858;
extern unsigned int g_1007685c;
extern unsigned int g_10076a90;
extern void *g_10049084;   // IAT slot 0x10049084 (HeapFree)
extern void *g_100491c8;   // IAT slot 0x100491c8 (VirtualFree)
extern void *g_10049118;   // IAT slot 0x10049118 (HeapDestroy)

__declspec(naked) void __stdcall func_10038e3f(void)
{
    __asm {
        mov eax, dword ptr [g_10076a94]
        push esi
        cmp eax, 0x3
        push edi
        jnz LEB1
        push ebx
        xor ebx, ebx
        cmp dword ptr [g_10076858], ebx
        push ebp
        mov ebp, dword ptr [g_10049084]
        jle LE9D
        mov eax, dword ptr [g_1007685c]
        mov edi, dword ptr [g_100491c8]
        lea esi, [eax + 0xc]
    LE6B:
        push 0x4000
        push 0x100000
        push dword ptr [esi]
        call edi
        push 0x8000
        push 0x0
        push dword ptr [esi]
        call edi
        push dword ptr [esi + 0x4]
        push 0x0
        push dword ptr [g_10076a90]
        call ebp
        add esi, 0x14
        inc ebx
        cmp ebx, dword ptr [g_10076858]
        jl LE6B
    LE9D:
        push dword ptr [g_1007685c]
        push 0x0
        push dword ptr [g_10076a90]
        call ebp
        pop ebp
        pop ebx
        jmp LED8
    LEB1:
        cmp eax, 0x2
        jnz LED8
        mov edi, 0x10051f70
        mov esi, edi
    LEBD:
        mov eax, dword ptr [esi + 0x10]
        test eax, eax
        jz LED2
        push 0x8000
        push 0x0
        push eax
        call dword ptr [g_100491c8]
    LED2:
        mov esi, dword ptr [esi]
        cmp esi, edi
        jnz LEBD
    LED8:
        push dword ptr [g_10076a90]
        call dword ptr [g_10049118]
        pop edi
        pop esi
        ret
    }
}
