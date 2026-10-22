/*
 * MW4Stats.dll - MW4StatsDll_UploadLog (0x10002930, 408 B, __stdcall)
 * Upload log via event + wait; SEH prologue/epilogue, IAT + virtual calls.
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void *g_10021030; /* IAT: CreateEventA */
extern void *g_1002102c; /* IAT: CloseHandle */
extern void *g_10021028; /* IAT: WaitForSingleObject */
extern void __cdecl FUN_100032a0(void);
extern void __cdecl FUN_100032b0(void);
extern void __cdecl FUN_10003B20(void);
extern void __cdecl FUN_10002ae0(void);
extern void __cdecl FUN_10003B60(void);
extern void __cdecl FUN_100032d0(void);

__declspec(naked) void MW4StatsDll_UploadLog(void)
{
    __asm {
        push ebp
        mov ebp, esp
        push -0x1
        push 0x1001f348
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        sub esp, 0x1c
        push esi
        push edi
        push 0x100241bc
        push 0x0
        push 0x1
        push 0x0
        call dword ptr [g_10021030]
        mov esi, eax
        test esi, esi
        jnz L1
        int 3
        pop edi
        mov eax, 0x80004005
        pop esi
        mov ecx, dword ptr [ebp-0xc]
        mov dword ptr fs:[0], ecx
        mov esp, ebp
        pop ebp
        ret
    L1:
        lea ecx, [ebp-0x28]
        call FUN_100032a0
        lea ecx, [ebp-0x18]
        call FUN_100032b0
        lea eax, [ebp-0x18]
        push eax
        lea ecx, [ebp-0x28]
        push ecx
        mov ecx, 0x10027058
        mov dword ptr [ebp-0x4], 0x0
        mov dword ptr [ebp-0x24], 0x4
        mov dword ptr [ebp-0x20], 0x1388
        mov dword ptr [ebp-0x1c], esi
        call    FUN_10003B20
        mov edi, eax
        test edi, edi
        jge L2
        push esi
        call dword ptr [g_1002102c]
        lea ecx, [ebp-0x18]
        mov dword ptr [ebp-0x4], 0xffffffff
        call FUN_10002ae0
        mov eax, edi
        pop edi
        pop esi
        mov ecx, dword ptr [ebp-0xc]
        mov dword ptr fs:[0], ecx
        mov esp, ebp
        pop ebp
        ret
    L2:
        mov edx, dword ptr [ebp-0x20]
        push edx
        push esi
        call dword ptr [g_10021028]
        push esi
        mov edi, eax
        call dword ptr [g_1002102c]
        cmp edi, 0x102
        jnz L3
        lea ecx, [ebp-0x18]
        mov dword ptr [ebp-0x4], 0xffffffff
        call FUN_10002ae0
        pop edi
        mov eax, 0x80040270
        pop esi
        mov ecx, dword ptr [ebp-0xc]
        mov dword ptr fs:[0], ecx
        mov esp, ebp
        pop ebp
        ret
    L3:
        test edi, edi
        jz L4
        lea ecx, [ebp-0x18]
        mov dword ptr [ebp-0x4], 0xffffffff
        call FUN_10002ae0
        pop edi
        mov eax, 0x80040270
        pop esi
        mov ecx, dword ptr [ebp-0xc]
        mov dword ptr fs:[0], ecx
        mov esp, ebp
        pop ebp
        ret
    L4:
        lea eax, [ebp-0x10]
        push eax
        mov ecx, 0x10027058
        call    FUN_10003B60
        test eax, eax
        jge L5
        lea ecx, [ebp-0x18]
        mov dword ptr [ebp-0x4], 0xffffffff
        call FUN_10002ae0
        pop edi
        mov eax, 0x80040270
        pop esi
        mov ecx, dword ptr [ebp-0xc]
        mov dword ptr fs:[0], ecx
        mov esp, ebp
        pop ebp
        ret
    L5:
        cmp dword ptr [ebp-0x10], 0x2
        jnz L6
        lea ecx, [ebp-0x18]
        call FUN_100032d0
        mov ecx, dword ptr [eax]
        lea edx, [ebp-0x10]
        push edx
        push eax
        call dword ptr [ecx+0xc]
        lea ecx, [ebp-0x18]
        mov dword ptr [ebp-0x4], 0xffffffff
        call FUN_10002ae0
        pop edi
        mov eax, 0x80040270
        pop esi
        mov ecx, dword ptr [ebp-0xc]
        mov dword ptr fs:[0], ecx
        mov esp, ebp
        pop ebp
        ret
    L6:
        lea ecx, [ebp-0x18]
        mov dword ptr [ebp-0x4], 0xffffffff
        call FUN_10002ae0
        mov ecx, dword ptr [ebp-0xc]
        pop edi
        xor eax, eax
        pop esi
        mov dword ptr fs:[0], ecx
        mov esp, ebp
        pop ebp
        ret
    }
}
