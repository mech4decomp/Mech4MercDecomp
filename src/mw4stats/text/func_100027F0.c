/*
 * MW4Stats.dll - FUN_100027f0 (0x100027F0, 320 B, __fastcall)
 * SEH prologue; clears 17 sub-buffers of a large struct (this in ECX).
 * Transcribed from MW4Stats.dll reference bytes.
 */
extern void __cdecl FUN_10001190(void);

__declspec(naked) void FUN_100027f0(void)
{
    __asm {
        push -0x1
        push 0x1001f32d
        mov eax, dword ptr fs:[0]
        push eax
        mov dword ptr fs:[0], esp
        push ecx
        push esi
        mov esi, ecx
        mov dword ptr [esp+0x4], esi
        lea ecx, [esi+0x98c]
        mov dword ptr [esp+0x10], 0xf
        call FUN_10001190
        lea ecx, [esi+0x8f4]
        mov byte ptr [esp+0x10], 0xe
        call FUN_10001190
        lea ecx, [esi+0x85c]
        mov byte ptr [esp+0x10], 0xd
        call FUN_10001190
        lea ecx, [esi+0x7c4]
        mov byte ptr [esp+0x10], 0xc
        call FUN_10001190
        lea ecx, [esi+0x72c]
        mov byte ptr [esp+0x10], 0xb
        call FUN_10001190
        lea ecx, [esi+0x694]
        mov byte ptr [esp+0x10], 0xa
        call FUN_10001190
        lea ecx, [esi+0x5fc]
        mov byte ptr [esp+0x10], 0x9
        call FUN_10001190
        lea ecx, [esi+0x564]
        mov byte ptr [esp+0x10], 0x8
        call FUN_10001190
        lea ecx, [esi+0x4cc]
        mov byte ptr [esp+0x10], 0x7
        call FUN_10001190
        lea ecx, [esi+0x434]
        mov byte ptr [esp+0x10], 0x6
        call FUN_10001190
        lea ecx, [esi+0x39c]
        mov byte ptr [esp+0x10], 0x5
        call FUN_10001190
        lea ecx, [esi+0x300]
        mov byte ptr [esp+0x10], 0x4
        call FUN_10001190
        lea ecx, [esi+0x268]
        mov byte ptr [esp+0x10], 0x3
        call FUN_10001190
        lea ecx, [esi+0x1d0]
        mov byte ptr [esp+0x10], 0x2
        call FUN_10001190
        lea ecx, [esi+0x138]
        mov byte ptr [esp+0x10], 0x1
        call FUN_10001190
        lea ecx, [esi+0xa0]
        mov byte ptr [esp+0x10], 0x0
        call FUN_10001190
        lea ecx, [esi+0x8]
        mov dword ptr [esp+0x10], 0xffffffff
        call FUN_10001190
        mov ecx, dword ptr [esp+0x8]
        pop esi
        mov dword ptr fs:[0], ecx
        add esp, 0x10
        ret
    }
}
