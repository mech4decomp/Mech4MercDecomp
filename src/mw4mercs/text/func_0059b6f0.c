/*
 * FUN_0059b6f0 (187 B) — Object array deserialization constructor.
 *
 * Reads a count from a stream, creates that many objects via
 * FUN_0059B230, and adds them to two containers (at this+0x10
 * and this+0x18).
 *
 * __thiscall (ECX = this), RET 4 (1 stack param: stream).
 *
 * CFLAGS: /O1
 * Match: target 100%
 */

extern void __cdecl FUN_004D5B10(int val);
extern void *__cdecl FUN_004084D0(int size);
extern void *__stdcall FUN_0059B230(void *this, void *stream);
extern void __cdecl FUN_004179B0(void *container, void *obj);

__declspec(naked) void *FUN_0059B6F0(void *stream)
{
    

extern int DAT_007f1ff8;
__asm {
push    ecx
        mov eax, dword ptr [DAT_007f1ff8]
        push    ebx
        push    ebp
        push    esi
        push    edi
        mov     ebx, ecx
        push    eax
        call    FUN_004D5B10

        mov     edi, dword ptr [esp + 0x18]
        mov     edx, dword ptr [edi]
        xor     ebp, ebp
        lea     esi, [ebx + 0x10]

        push    4
        lea     eax, [esp + 0x14]
        mov     dword ptr [esi], ebp
        mov     dword ptr [esi + 4], ebp
        mov     dword ptr [ebx + 0x18], ebp
        push    eax
        mov     ecx, edi
        mov     dword ptr [ebx + 0x1C], ebp
        mov     dword ptr [ebx], 0x00783894
        call    dword ptr [edx + 0x20]

        mov     eax, dword ptr [esp + 0x10]
        test    eax, eax
        jle     second_pass

loop1_start:
        push    0x54
        call    FUN_004084D0
        add     esp, 4
        test    eax, eax
        je      loop1_alloc_fail
        push    edi
        mov     ecx, eax
        call    FUN_0059B230
        jmp     loop1_push

loop1_alloc_fail:
        xor     eax, eax

loop1_push:
        push    eax
        mov     ecx, esi
        call    FUN_004179B0
        mov     eax, dword ptr [esp + 0x10]
        inc     ebp
        cmp     ebp, eax
        jl      loop1_start

second_pass:
        mov     edx, dword ptr [edi]
        push    4
        lea     eax, [esp + 0x14]
        push    eax
        mov     ecx, edi
        call    dword ptr [edx + 0x20]

        mov     eax, dword ptr [esp + 0x10]
        xor     esi, esi
        test    eax, eax
        jle     done

loop2_start:
        push    0x54
        call    FUN_004084D0
        add     esp, 4
        test    eax, eax
        je      loop2_alloc_fail
        push    edi
        mov     ecx, eax
        call    FUN_0059B230
        jmp     loop2_push

loop2_alloc_fail:
        xor     eax, eax

loop2_push:
        push    eax
        lea     ecx, [ebx + 0x18]
        call    FUN_004179B0
        mov     eax, dword ptr [esp + 0x10]
        inc     esi
        cmp     esi, eax
        jl      loop2_start

done:
        pop     edi
        pop     esi
        pop     ebp
        mov     eax, ebx
        pop     ebx
        pop     ecx
        ret     4
    }


}
